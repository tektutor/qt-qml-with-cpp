import QtQuick 2.5

Rectangle {
	width: 100
	height: 50

	property var textValue: ""
	

	Rectangle {
		width: 98
		height: 48
		border.width: 2
		border.color: "black"
		color: "lightblue"

		anchors.horizontalCenter: parent.horizontalCenter
		anchors.verticalCenter: parent.verticalCenter

		Text {
			anchors.horizontalCenter: parent.horizontalCenter
			anchors.verticalCenter: parent.verticalCenter

			text: textValue
		}
	}
	
}
