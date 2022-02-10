#include <QGuiApplication>
#include <QQuickView>
#include <QQuickItem>
#include <QScopedPointer>

#include "MyObject.h"

int main( int argc, char** argv ) {
    QGuiApplication theApp(argc, argv);
    
    QQuickView view;
    view.setSource ( QUrl ( QStringLiteral ( "qrc:///main.qml" ) ) );
    view.show();

    QQuickItem *pItem = view.rootObject();
      
    QScopedPointer<MyObject> pMyObject ( new MyObject() ); 

    QObject::connect (
        pItem,                          //Source of the signal
        SIGNAL ( buttonClicked ( QString ) ), //signal emited by QML 
        pMyObject.data(),               //Destination object that is going to supply slot method
        SLOT( onButtonClicked( QString ) )  //Slot method - event handler
    );

    return theApp.exec();
}
