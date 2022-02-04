#include "csvsaver.h"
#include <QTextStream>
#include <QFile>
#include <QDebug>
#include <QDir>
CSVSaver::CSVSaver(QObject *parent) : QObject(parent)
{

}
QString CSVSaver::getPath()
{
    QDir dir;
    qDebug()<<dir.absolutePath();
    return dir.absolutePath();
}
 void CSVSaver::add_data(QString datetime, QString current, QString vcc, QString adc)
 {
     DATA item;
     item.datetime = datetime;
     item.current = current;
     item.vcc = vcc;
     item.adc = adc;
     data.append(item);
 }
 void CSVSaver::save_to_file(QString file_name)
 {
     QFile csvFile("/storage/emulated/0/Documents/" + file_name);
     if(csvFile.open(QIODevice::WriteOnly))
     {
         QTextStream textStream(&csvFile);
         for (int i=0; i<data.count(); i++)
         {
             DATA item;
             item = data[i];
             //qDebug()<<item.datetime<<"; "<<item.current<<"; "<<item.vcc<<"; "<<item.adc<<"\n";
             textStream<<item.datetime<<"; "<<item.current<<"; "<<item.vcc<<"; "<<item.adc<<"\n";
         }
     }
     csvFile.flush();
     qDebug()<<csvFile.fileName();
     csvFile.close();
 }
 void CSVSaver::clean(){
     data.clear();
 }
