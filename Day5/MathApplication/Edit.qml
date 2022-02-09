import QtQuick 2.5

Rectangle {
	width: 300
	height: 50

	property var textValue: ""

	function getValue() {
		return textInput.text
	}

	Rectangle {
		width: 300 
		height: 50 
		border.width: 2
		border.color: "black"

		radius: 10

		anchors.horizontalCenter: parent.horizontalCenter
		anchors.verticalCenter: parent.verticalCenter

		TextInput {
			id: textInput
			anchors.horizontalCenter: parent.horizontalCenter
			anchors.verticalCenter: parent.verticalCenter

			text: textValue
		}
	}
	
	MouseArea {
		anchors.fill: parent
		onClicked:
			textInput.focus = true
	}
}
