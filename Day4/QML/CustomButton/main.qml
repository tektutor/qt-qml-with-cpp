import QtQuick 2.5

Rectangle{
	id: topRect

	width: 800
	height: 600

	color: "green"

	Rectangle {
		width: 780; height: 580
		anchors.horizontalCenter: parent.horizontalCenter
		anchors.verticalCenter: parent.verticalCenter
	Column {
		anchors.horizontalCenter: parent.horizontalCenter
		anchors.verticalCenter: parent.verticalCenter
		spacing: 10
		Row {
			spacing: 10
			Button { 
				caption: "Button 1" 
				textColor: "white"
			}
			Button { 
				caption: "Button 2" 
				textColor: "white"
			}
			Button { 
				caption: "Button 3" 
				textColor: "white"
			}
		}
		Row {
			spacing: 10
			Button { 
				caption: "Button 4" 
				textColor: "white"
			}
			Button { 
				caption: "Button 5" 
				textColor: "white"
			}
			Button { 
				caption: "Button 6" 
				textColor: "white"
			}
		}
		Row {
			spacing: 10
			Button { 
				caption: "Button 7" 
				textColor: "white"
			}
			Button { 
				caption: "Button 8" 
				textColor: "white"
			}
			Button { 
				caption: "Button 9" 
				textColor: "white"
			}
		}
	}
	}

}
