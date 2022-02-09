import QtQuick 2.5

Rectangle {
	width: 200
	height: 50

	y: 10

	property var value: ""

	radius: 20

	anchors.horizontalCenter: parent.horizontalCenter

	Rectangle {
		width: 295
		height: 45
		radius: 20

		anchors.horizontalCenter: parent.horizontalCenter
		anchors.verticalCenter: parent.verticalCenter

		color: "lightgreen"
		border.width: 2
	
		Text {
			x: 10
			anchors.verticalCenter: parent.verticalCenter
			text: value
		}
	}
}
