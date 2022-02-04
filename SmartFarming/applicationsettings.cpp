#include "applicationsettings.h"
#include <QCoreApplication>
#include <QDebug>

ApplicationSettings::ApplicationSettings(QObject *parent) : QObject(parent)
{



}

void ApplicationSettings::setInterval(int value){
   QSettings settings("Fraunhofer", "SmartFarming");
   settings.setValue("settings/interval", value);
   settings.sync();
   intervalChanged();
}
void ApplicationSettings::setRepeats(int value){
   QSettings settings("Fraunhofer", "SmartFarming");
    settings.setValue("settings/repeats", value);
   settings.sync();
    repeatsChanged();
}
void ApplicationSettings::setIsCyclic(bool value){
    QSettings settings("Fraunhofer", "SmartFarming");
    settings.setValue("settings/is_cyclic", value);
    settings.sync();
    isCyclicChanged();
}
void ApplicationSettings::setR(int value){
    QSettings settings("Fraunhofer", "SmartFarming");
    settings.setValue("settings/r", value);
    settings.sync();
    rChanged();
}
void ApplicationSettings::setVREF(int value)
{
    QSettings settings("Fraunhofer", "SmartFarming");
    settings.setValue("settings/vref", value);
    settings.sync();
    VrefChanged();
}

void ApplicationSettings::setVNEG(int value)
{
    QSettings settings("Fraunhofer", "SmartFarming");
    settings.setValue("settings/vneg", value);
    settings.sync();
    VnegChanged();
}


int ApplicationSettings::getInterval()
{
    QSettings settings("Fraunhofer", "SmartFarming");
    settings.sync();
    int tmp = settings.value("settings/interval").toInt();
    return tmp;
}
int ApplicationSettings::getRepeats()
{
    QSettings settings("Fraunhofer", "SmartFarming");
    settings.sync();
    return settings.value("settings/repeats").toInt();
}
bool ApplicationSettings::getIsCyclic()
{
    QSettings settings("Fraunhofer", "SmartFarming");
    settings.sync();
    return settings.value("settings/is_cyclic", false).toBool();
}
int ApplicationSettings::getR()
{
    QSettings settings("Fraunhofer", "SmartFarming");
    settings.sync();
    return settings.value("settings/r").toInt();
}
int ApplicationSettings::getVREF()
{
    QSettings settings("Fraunhofer", "SmartFarming");
    settings.sync();
    return settings.value("settings/vref").toInt();
}

int ApplicationSettings::getVNEG()
{
    QSettings settings("Fraunhofer", "SmartFarming");
    settings.sync();
    return settings.value("settings/vneg").toInt();
}
