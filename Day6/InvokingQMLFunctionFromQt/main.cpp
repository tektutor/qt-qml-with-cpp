#include <QGuiApplication>
#include <QQmlEngine>
#include <QQmlComponent>
#include <QDebug>

int main (int argc, char **argv) {

    QGuiApplication theApp ( argc, argv );
    QQmlEngine engine;
    QQmlComponent qmlComponent( &engine, "qrc:///main.qml");
    QObject *pObject = qmlComponent.create();

    QVariant msg;
    QMetaObject::invokeMethod ( pObject, "qmlSayHello", Q_RETURN_ARG(QVariant, msg) ); 
    
    qDebug() << msg.toString() << endl;

    return theApp.exec();

}
