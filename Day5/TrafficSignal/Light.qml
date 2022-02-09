import QtQuick 2.5

Rectangle {

	width: 100
	height: 100

	radius: 100
	
	border.width: 10
	border.color: "white"

	property var defaultColor: "black"
	
	state: "Off"

	Rectangle {
		id: light	
		width: 95
		height: 95

		radius: 100

		anchors.horizontalCenter: parent.horizontalCenter
		anchors.verticalCenter: parent.verticalCenter
		
		color: defaultColor 
	}

	states: [
		State {
			name: "ON"
			PropertyChanges  { target: light; color: defaultColor } 
		},
		State {
			name: "OFF"
			PropertyChanges  { target: light; color: "black" } 
		}
	]

	transitions: [
		Transition {
			from: "ON"
			to: "OFF"
			reversible: true
			PropertyAnimation { target: light; properties: "color"; duration: 1000 }
		}
	]

	MouseArea {
		anchors.fill: parent
		onClicked:
			if ( parent.state == "ON" )
				parent.state = "OFF"	
			else
				parent.state = "ON"
	}
}
