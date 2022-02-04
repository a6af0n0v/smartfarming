#ifndef APPLICATIONSETTINGS_H
#define APPLICATIONSETTINGS_H

#include <QObject>
#include <QSettings>

class ApplicationSettings : public QObject
{
    Q_OBJECT

    void setInterval(int value);
    void setRepeats(int value);
    void setIsCyclic(bool value);
    void setR(int value);
    void setVREF(int value);
    void setVNEG(int value);

    int getInterval();
    int getRepeats();
    bool getIsCyclic();
    int getR();
    int getVREF();
    int getVNEG();

public:
    explicit ApplicationSettings(QObject *parent = nullptr);
    Q_PROPERTY(int Interval READ getInterval WRITE setInterval NOTIFY intervalChanged)
    Q_PROPERTY(int Repeats READ getRepeats WRITE setRepeats  NOTIFY repeatsChanged)
    Q_PROPERTY(bool isCyclic READ getIsCyclic WRITE setIsCyclic NOTIFY isCyclicChanged)
    Q_PROPERTY(int R READ getR WRITE setR NOTIFY rChanged)
    Q_PROPERTY(int VREF READ getVREF WRITE setVREF NOTIFY VrefChanged)
    Q_PROPERTY(int VNEG READ getVNEG WRITE setVNEG NOTIFY VnegChanged)


signals:
    void intervalChanged();
    void repeatsChanged();
    void isCyclicChanged();
    void rChanged();
    void VrefChanged();
    void VnegChanged();
};

#endif // APPLICATIONSETTINGS_H
