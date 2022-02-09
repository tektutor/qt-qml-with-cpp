import QtQuick 2.5

Rectangle {
	width: 100
	height: 50

	property var caption: "B"
	property var buttonColor: "black"

	property var operatorSelected: ""

	Rectangle {
		width:  95 
		height: 45

		anchors.horizontalCenter: parent.horizontalCenter
		anchors.verticalCenter: parent.verticalCenter

		border.width: 1
		border.color: "black"
		radius: 10

		gradient: Gradient {
			GradientStop { position: 0.0; color: "white" }
			GradientStop { position: 0.1; color: buttonColor }
		}
		
		Text {
			anchors.horizontalCenter: parent.horizontalCenter
			anchors.verticalCenter: parent.verticalCenter

			text: caption
			color: "white"
			font.pointSize: 12
		}
	}

	MouseArea {
		anchors.fill: parent

		onClicked: {
			calculator.operatorSelected = caption
			calculator.firstValue = parseFloat (display.value)  		
			display.value = ""
		}
	}

}
