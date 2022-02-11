import QtQuick 2.5
//import Org.TekTutor.MyClass 1.0

Item {
    width: 500
    height:600

/*
    MyClass {
        id: myClass
        onNameChanged:
            console.log ( name )
    }
*/

    Connections {
        target: MyClass
       
        onNameChanged:  
            console.log ( name )
    }

    MouseArea {
        anchors.fill: parent

        onClicked: {
            MyClass.name = "Custom Qt Property accessed from QML"
            console.log ( "Mouse clicked" )
        }
    }
}
