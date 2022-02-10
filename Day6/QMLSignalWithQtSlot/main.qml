import QtQuick 2.5

Item {
    width: 500
    height: 600

    property string value: "Emit Signal"
    property int buttonWidth: 200
    property int buttonHeight: 50
    property int fontSize: 15 
    property string borderColor: "black"

    signal buttonClicked ( string msg )

    Rectangle {
        id: button

        width: buttonWidth 
        height: buttonHeight

        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter

        border.width: 2
        border.color: borderColor
        radius: 30

        gradient: Gradient {
            GradientStop { position: 0.0; color: "white" }
            GradientStop { position: 0.5; color: "darkgray" }
            GradientStop { position: 0.0; color: "white" }
        }

        Text {
            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter

            color: "white"

            text: value 
            font.pointSize: fontSize 
        }
    }

    MouseArea {
        anchors.fill: button

        hoverEnabled: true

        onEntered: {
            buttonWidth = 210
            buttonHeight = 60
            borderColor = "red"
            fontSize = 20
        }

        onExited: {
            buttonWidth = 200
            buttonHeight = 50
            borderColor = "black"
            fontSize = 15 
        }

        onClicked: {
            buttonClicked ( "QML Button clicked" )
        }
    }
}
