#ifndef BLUETOOTHAGENT_H
#define BLUETOOTHAGENT_H

#include <QObject>
#include <QtBluetooth/QBluetoothDeviceDiscoveryAgent>
#include <QtBluetooth/QBluetoothDeviceInfo>
#include <QtBluetooth/QLowEnergyController>
#include <QtBluetooth/QLowEnergyService>
#include <QtBluetooth/QLowEnergyCharacteristic>
#include <QtBluetooth/QLowEnergyDescriptor>
#include <QtBluetooth/QBluetoothUuid>
#include <QTimer>
#include <QtBluetooth/QLowEnergyConnectionParameters>

class BluetoothAgent : public QObject
{
    Q_OBJECT

private:
    QBluetoothDeviceDiscoveryAgent *discoveryAgent;
    QLowEnergyController    *controller;
    enum BT_STATE {DISCONNECTED=0, SCANNING, FOUND, CONNECTING, DISCOVERY_FINISHED, CONNECTED, ERROR, INCYCLE};
    BT_STATE bt_state;
    QString sResult;
    QList<QBluetoothUuid> bt_services;
    QLowEnergyService*  service;
    QLowEnergyConnectionParameters params;
    const QString led_service       = "f0001110-0451-4000-b000-000000000000";
    const QString button_service    = "f0001120-0451-4000-b000-000000000000";
    const QString data_service      = "f0001130-0451-4000-b000-000000000000";
    const QString char_string      = "f0001131-0451-4000-b000-000000000000";
    const QString char_stream      = "f0001132-0451-4000-b000-000000000000";
    const int ref_voltage = 912496;
    int ADC = 0;
    int NEGVCC = 0;
    double current = 0;
    QTimer keepAliveTimer, measureTimer;
    int iMeasure=0;

public:
    explicit BluetoothAgent(QObject *parent = nullptr);
    virtual ~BluetoothAgent();

    Q_PROPERTY (int state       WRITE setState
                                READ readState
                                NOTIFY stateChanged)
    Q_PROPERTY(QString result READ getResult )

    Q_PROPERTY(int NEGVCC READ getNEGVCC)
    Q_PROPERTY(int ADC READ getADC)
    Q_PROPERTY(double current READ getCurrent )


    int readState() const;
    void setState(int value);
    void setState(BT_STATE value);
    int notifyState();
    QString getResult();
    int getADC() {return ADC;}
    int getNEGVCC() {return NEGVCC;}
    double getCurrent() {return current;}




    Q_INVOKABLE void connect();
    Q_INVOKABLE void disconnect();
    Q_INVOKABLE void measure();


signals:
     void connected();
     void finished();
     void canceled();
     void dataReady();
     void error(QLowEnergyController::Error err);
     void stateChanged(int);

public slots:
     void onDeviceDiscovered(const QBluetoothDeviceInfo &info);
     void onFinished();
     void onCanceled();
     void onServiceDiscovered(const QBluetoothUuid &service);
     void onDiscoveryFinished();
     void onConnected();
     void onError(QLowEnergyController::Error err);
     void onStateChanged(QLowEnergyService::ServiceState newState);
     void onCharacteristicsChanged(const QLowEnergyCharacteristic &characteristic, const QByteArray &newValue);
     void onDescriptorWritten(const QLowEnergyDescriptor &descriptor, const QByteArray &newValu);
     void onCharacteristicRead(const QLowEnergyCharacteristic &characteristic, const QByteArray &value);
     void keepConnectionAlive();
     void measureInCycle();

};

#endif // BLUETOOTHAGENT_H
