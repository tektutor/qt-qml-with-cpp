import QtQuick 2.5

Item {
    id: topRect

    width: 500
    height: 600

    property string value: ""

    Connections {
        target: MyObject
    
        onQtSignal: {
            console.log ( message ) 
            topRect.value = message
        }
    }


    Rectangle {
        id: button

        width: 400 
        height:100

        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter

        border.width: 2
        border.color: "black"
        radius: 30

        Text {
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter

            color: "black"

            text: value 
            font.pointSize: 15 
        }
    }

}
