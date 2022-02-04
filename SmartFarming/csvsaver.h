#ifndef CSVSAVER_H
#define CSVSAVER_H

#include <QObject>

class CSVSaver : public QObject
{
    Q_OBJECT
    struct DATA{
        QString datetime;
        QString current;
        QString vcc;
        QString adc;
    };

    QList<DATA> data;
    QString getPath();

public:
    explicit CSVSaver(QObject *parent = nullptr);
    Q_PROPERTY(QString path READ getPath)
    Q_INVOKABLE void add_data(QString datetime, QString current, QString vcc, QString adc);
    Q_INVOKABLE void save_to_file(QString file_name);
    Q_INVOKABLE void clean();
signals:

};

#endif // CSVSAVER_H
