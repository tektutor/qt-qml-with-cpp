#include <QGuiApplication>
#include <QQuickView>
#include "MyMath.h"

int main ( int argc, char ** argv ) {
    QGuiApplication theApp ( argc, argv );

    qmlRegisterType<MyMath>( "Org.TekTutor.MyMath", 2, 5, "TekTutorMath" );

    QQuickView view;
    view.setSource ( QUrl ( QStringLiteral ( "qrc:///main.qml" ) ) );
    view.show();

    return theApp.exec();
}
