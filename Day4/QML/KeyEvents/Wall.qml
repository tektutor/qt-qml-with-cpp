import QtQuick 2.5

Rectangle {
	width: 25; height: 25 
	
	border.color: "black"

	gradient: Gradient {
		GradientStop { position: 0.0; color: "white" }
		GradientStop { position: 1.0; color: "brown" }
	}

}
