import QtQuick 2.5

Rectangle {

	width: 100
	height: 50

	property var caption: "Button"

	Rectangle {
		width: 98
		height: 48

		anchors.horizontalCenter: parent.horizontalCenter
		anchors.verticalCenter: parent.verticalCenter

		border.width: 1
		border.color: "black"

		gradient: Gradient {
			GradientStop { position: 0.0; color: "white" }
			GradientStop { position: 0.5; color: "darkgray" }
			GradientStop { position: 0.1; color: "black" }
		}
		
		Text {
			anchors.horizontalCenter: parent.horizontalCenter
			anchors.verticalCenter: parent.verticalCenter

			text: caption
			color: "white"
			font.pointSize: 12
		}
	}

	signal buttonClicked()
	
	MouseArea {
		anchors.fill: parent

		onClicked:
			buttonClicked()
	}

}
