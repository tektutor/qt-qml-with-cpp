#include <QGuiApplication>
#include <QQuickView>
#include <QScopedPointer>
#include "MyObject.h"

int main ( int argc, char ** argv ) {

    QGuiApplication theApp ( argc, argv );

    qmlRegisterType<MyObject>("org.tektutor.myobject", 1, 5, "MyObject");

    QQuickView view;
    view.setSource ( QUrl ( QStringLiteral ( "qrc:///main.qml" ) ) );
    view.show();

    return theApp.exec();

}
