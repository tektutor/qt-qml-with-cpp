#include <QGuiApplication>
#include <QQuickView>
#include <QQmlContext>
#include "MyObject.h"

int main ( int argc, char** argv ) {
    QGuiApplication theApp(argc,argv);

    //qmlRegisterType<MyObject> ( "Org.TekTutor.MyClass", 1, 0, "MyClass" );
    
    QScopedPointer<MyObject> pObject( new MyObject() );
    
    QQuickView view;
    QQmlContext *pQMLContext = view.rootContext();
    pQMLContext->setContextProperty ( "MyClass", pObject.data() );

    view.setSource ( QUrl ( QStringLiteral ( "qrc:///main.qml" ) ) );
    view.show();

    pObject->setProperty("name", "Some name assigned in main.cpp");

    return theApp.exec();
}
