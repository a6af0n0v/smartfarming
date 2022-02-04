#include "bluetoothagent.h"
#include <qexception.h>
#include <QDebug>
#include <QSettings>
BluetoothAgent::BluetoothAgent(QObject *parent) : QObject(parent)
{
    discoveryAgent = NULL;
    discoveryAgent = new QBluetoothDeviceDiscoveryAgent(this);
    discoveryAgent->setLowEnergyDiscoveryTimeout(3000);
    QObject::connect(discoveryAgent, SIGNAL(deviceDiscovered(QBluetoothDeviceInfo)), this, SLOT(onDeviceDiscovered(QBluetoothDeviceInfo)));
    QObject::connect(discoveryAgent, SIGNAL(finished()), this, SLOT(onFinished()));
    QObject::connect(discoveryAgent, SIGNAL(canceled()), this, SLOT(onCanceled()));
    setState(DISCONNECTED);
    controller = NULL;
    service = NULL;
    keepAliveTimer.setInterval(5000);
    QSettings settings("Fraunhofer", "SmartFarming");
    measureTimer.setInterval(settings.value("settings/interval", 10000).toInt());

    QObject::connect(&measureTimer, SIGNAL(timeout()), this, SLOT(measureInCycle()));
    QObject::connect(&keepAliveTimer, SIGNAL(timeout()), this, SLOT(keepConnectionAlive()));
}

void BluetoothAgent::keepConnectionAlive()
{
    try {
        QLowEnergyCharacteristic charStream = service->characteristic(QBluetoothUuid::fromString(char_stream));
        qDebug()<<"keeping alive";
        if(charStream.isValid())
        {
            service->writeCharacteristic(charStream, QByteArray(1,0x10));
        }

    }  catch (QException ex) {
        keepAliveTimer.stop();
        qDebug()<<"Error";
        throw ex;
    }
}

BluetoothAgent::~BluetoothAgent()
{
    if(discoveryAgent)
        delete discoveryAgent;
    if(controller)
        delete controller;
}

void BluetoothAgent::onDeviceDiscovered(const QBluetoothDeviceInfo &info)
{
    if (info.name()=="Smart Farming")
    {
        setState(FOUND);
        controller =   QLowEnergyController::createCentral(info, this);
        QObject::connect(controller, SIGNAL(serviceDiscovered(QBluetoothUuid)), this, SLOT(onServiceDiscovered(QBluetoothUuid)));
        QObject::connect(controller, SIGNAL(discoveryFinished()), this, SLOT(onDiscoveryFinished()));
        QObject::connect(controller, SIGNAL(connected()), this, SLOT(onConnected()));
        QObject::connect(controller, SIGNAL(error(QLowEnergyController::Error)), this, SLOT(onError(QLowEnergyController::Error)));
    }
}

void BluetoothAgent::onServiceDiscovered(const QBluetoothUuid &service)
{
    bt_services.append(service);
}
void BluetoothAgent::onDiscoveryFinished()
{
    setState(DISCOVERY_FINISHED);
    //DISCOVER DETAILS...
    service = controller->createServiceObject(QBluetoothUuid::fromString(data_service));
    QObject::connect(service, SIGNAL(stateChanged(QLowEnergyService::ServiceState )), this, SLOT(onStateChanged(QLowEnergyService::ServiceState )));
    QObject::connect(service, SIGNAL(characteristicChanged( QLowEnergyCharacteristic , QByteArray )), this, SLOT(onCharacteristicsChanged( QLowEnergyCharacteristic ,  QByteArray )));
    QObject::connect(service, SIGNAL(descriptorWritten(QLowEnergyDescriptor ,  QByteArray )), this, SLOT(onDescriptorWritten( QLowEnergyDescriptor ,  QByteArray )));
    QObject::connect(service, SIGNAL(characteristicRead(QLowEnergyCharacteristic, QByteArray )), this, SLOT(onCharacteristicRead( QLowEnergyCharacteristic ,  QByteArray )));
    service->discoverDetails();

}

void BluetoothAgent::onStateChanged(QLowEnergyService::ServiceState newState){
    if (newState == QLowEnergyService::ServiceState::ServiceDiscovered)
    {
        setState(CONNECTED);
        emit connected();
        keepAliveTimer.start();
    }
}
void BluetoothAgent::onCharacteristicsChanged(const QLowEnergyCharacteristic &characteristic, const QByteArray &newValue){

}
void BluetoothAgent::onDescriptorWritten(const QLowEnergyDescriptor &descriptor, const QByteArray &newValu){

}
void BluetoothAgent::onCharacteristicRead(const QLowEnergyCharacteristic &characteristic, const QByteArray &value){
    sResult = value;
    QSettings settings("Fraunhofer", "SmartFarming");
    int ref_voltage = settings.value("settings/vref", 912496).toInt();
    int r = settings.value("settings/r", 10000000).toInt();


    QStringList list = sResult.split(",");
    ADC = list[0].toInt();
    NEGVCC = list[1].toInt();
    current = double (ADC-ref_voltage)*1000/r;

    emit dataReady();
}
QString BluetoothAgent::getResult(){
    return sResult;
}

void BluetoothAgent::onConnected()
{
    controller->discoverServices();
}
void BluetoothAgent::onError(QLowEnergyController::Error err)
{
    setState(ERROR);
    emit error(err);
}


void BluetoothAgent::onFinished()
{
    if(bt_state==FOUND)
    {
        try {
            bt_services.clear();
            controller->connectToDevice();
        }  catch (QException &e) {
            throw (e);
        }

    }
    setState(CONNECTING);
    emit finished();
}

void BluetoothAgent::onCanceled()
{
    emit canceled();
}


int BluetoothAgent::readState() const
{
    return (int)bt_state;
}

void BluetoothAgent::setState(int value)
{
    bt_state = (BT_STATE)value;

}

void BluetoothAgent::setState(BT_STATE value)
{
    bt_state = value;
    emit stateChanged(bt_state);
}


 void BluetoothAgent::connect()
 {
    setState(SCANNING);
    try {
        discoveryAgent->start();
    }  catch (QException &err)
    {
        throw (err);
    }

 }
 void BluetoothAgent::disconnect()
 {

 }
 void BluetoothAgent::measure()
 {

    if ((bt_state== BT_STATE::CONNECTED) or (bt_state== BT_STATE::INCYCLE))
    {
    try {
        QLowEnergyCharacteristic charStream = service->characteristic(QBluetoothUuid::fromString(char_stream));
        QLowEnergyCharacteristic charString = service->characteristic(QBluetoothUuid::fromString(char_string));

        if(charStream.isValid())
        {
            service->writeCharacteristic(charStream, QByteArray(1,0x13));
        }
        if(charString.isValid())
        {
            service->readCharacteristic(charString);

        }
    }  catch (QException e) {
        throw (e);
    }
    QSettings settings("Fraunhofer", "SmartFarming");
    if(bt_state!=BT_STATE::INCYCLE)
        if(settings.value("settings/is_cyclic").toBool())
        {
            int interval = settings.value("settings/interval", 1000).toInt();

            measureTimer.start(interval);
            bt_state = BT_STATE::INCYCLE;
            iMeasure = 0;
        }
    }

 }

 void BluetoothAgent::measureInCycle(){
     measure();
     iMeasure++;
     QSettings settings("Fraunhofer", "SmartFarming");


     if(iMeasure == settings.value("settings/repeats", 10).toInt() )
     {
         measureTimer.stop();
         bt_state = BT_STATE::CONNECTED;
     }
 }
