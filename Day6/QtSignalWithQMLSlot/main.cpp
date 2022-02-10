#include <QGuiApplication>
#include <QQuickView>
#include <QQmlContext>
#include <QScopedPointer>

#include "MyObject.h"

int main( int argc, char** argv ) {
    QGuiApplication theApp(argc, argv);
    
    QScopedPointer<MyObject> pMyObject ( new MyObject() ); 

    QQuickView view;
    QQmlContext *pQMLContext = view.rootContext();
    pQMLContext->setContextProperty( "MyObject", pMyObject.data() ); 
    
    view.setSource ( QUrl ( QStringLiteral ( "qrc:///main.qml" ) ) );
    view.show();

    emit pMyObject->qtSignal ( "Qt Signal with QML Slot - Demonstration" );

    return theApp.exec();
}
