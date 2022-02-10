import QtQuick 2.5

Item {
    width: 650 
    height: 800

    Rectangle {
        id: blueRect

        x: 0
        y: 00 

        width: 50
        height: 50
    
        color: "blue"

        SequentialAnimation {
            running: true
                
            loops: 100
    
            NumberAnimation { target: blueRect; property: "x"; to: 600; duration: 2000 } 
            NumberAnimation { target: blueRect; property: "y"; to: 750; duration: 2000 } 
            NumberAnimation { target: blueRect; property: "x"; to: 0; duration: 2000 } 
            NumberAnimation { target: blueRect; property: "y"; to: 0; duration: 2000 } 
        }
    
    } 
}
