#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "bluetoothagent.h"
#include "applicationsettings.h"
#include "csvsaver.h"
int main(int argc, char *argv[])
{
    qputenv("QT_IM_MODULE", QByteArray("qtvirtualkeyboard"));

#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif
    QCoreApplication::setOrganizationName("Fraunhofer");
    QCoreApplication::setApplicationName("Smart Farming");


    QGuiApplication app(argc, argv);
    qmlRegisterType<BluetoothAgent>("com.agafonov.BluetoothAgent",1,0,"BluetoothAgent");
    qmlRegisterType<ApplicationSettings>("com.agafonov.ApplicationSettings", 1, 0, "ApplicationSettings");
    qmlRegisterType<CSVSaver>("com.agafonov.CSVSaver", 1, 0, "CSVSaver");
    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
                     &app, [url](QObject *obj, const QUrl &objUrl) {
        if (!obj && url == objUrl)
            QCoreApplication::exit(-1);
    }, Qt::QueuedConnection);
    engine.load(url);

    return app.exec();
}
