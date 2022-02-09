import QtQuick 2.5

Rectangle {
	id: topRect
	width: 500
	height:600

	state: "yellow" 
	color: "yellow"

	function updateState() {
		var updatedState = "yellow"

		if ( topRect.state ==  "yellow" ) 
			updatedState = "green";
		else if ( topRect.state == "green" ) 
			updatedState = "blue";
		else if ( topRect.state == "blue" ) 
			updatedState = "yellow";

		return updatedState;
	}

	Timer {
		running: true
		repeat: true
		interval: 500

		onTriggered: 
			topRect.state = updateState()	
	}

	states: [
		State {
			name: "yellow"
			PropertyChanges { target: topRect; color: "yellow" }
		},
		State {
			name: "green"
			PropertyChanges { target: topRect; color: "green" }
		},
		State {
			name: "blue"
			PropertyChanges { target: topRect; color: "blue" }
		}
	]

	transitions: [
		Transition {
			from: "*"
			to: "*"
			ColorAnimation { duration: 1000 }
		}
	]
}
