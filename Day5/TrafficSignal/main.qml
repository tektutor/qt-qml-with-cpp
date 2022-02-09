import QtQuick 2.5

Item {
	id: topRect

	width: 800
	height: 800

	Rectangle {
		width: 225
		height: 15
		y: 10

		color: "black"
	}

	Rectangle {
		width: 15
		height: 45
		x: 210
		y: 25

		color: "black"
	}

	Rectangle {
		width: 150
		height:310 

		x: 150
		y: 70

		border.color: "black"

		gradient: Gradient {
			GradientStop { position: 0.0; color: "white" }
			GradientStop { position: 1.0; color: "black" }
		}

		Column {
			spacing: 5

			anchors.horizontalCenter: parent.horizontalCenter
			anchors.verticalCenter: parent.verticalCenter

			Light { 
				id: red 
				defaultColor: "red"
				state: "OFF" 
			}		
			Light { 
				id: yellow 
				defaultColor: "yellow"
				state: "OFF" 
			}		
			Light { 
				id: green 
				defaultColor: "green"
				state: "OFF" 
			}		

		}
	}

	states: [
		State {
			name : "Go"
			PropertyChanges { target: red;  state: "OFF" }
			PropertyChanges { target: yellow; state: "OFF" }
			PropertyChanges { target: green; state: "ON" }
		},
		State {
			name : "Ready"
			PropertyChanges { target: red;  state: "OFF" }
			PropertyChanges { target: yellow; state: "ON" }
			PropertyChanges { target: green; state: "OFF" }
		},
		State {
			name : "Stop"
			PropertyChanges { target: red;  state: "ON" }
			PropertyChanges { target: yellow; state: "OFF" }
			PropertyChanges { target: green; state: "OFF" }
		}
	]

	state: "Go"
	transitions: [
		Transition {
			from: "*"
			to: "*"
			PropertyAnimation { property: "state" }
		}
	]

	Timer {
		running: true
		interval: 3000
		repeat: true

		onTriggered:
			 if (topRect.state == "Go") {
				console.log ( "Go to Ready")
				topRect.state = "Ready" 
			 }
			 else if ( topRect.state == "Ready" ) {
				console.log ( "Ready to Stop")
				topRect.state = "Stop" 
			 }
			 else if ( topRect.state == "Stop" ) {
				console.log ( "Stop to Go")
				topRect.state = "Go"
		  	 }
	}
}
