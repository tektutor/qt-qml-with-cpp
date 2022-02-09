import QtQuick 2.5

Rectangle {
	id: calculator

	width: 400
	height: 350

	property double firstValue
	property double secondValue
	property double resultValue
	property var operatorSelected: ""

	Rectangle {

		width: 390
		height: 340

		anchors.verticalCenter: parent.verticalCenter
		anchors.horizontalCenter: parent.horizontalCenter

		border.width: 5
	
		Display { id: display }

		Grid {
			anchors.verticalCenter: parent.verticalCenter
			x: 50

			columns: 3

			Repeater {
				model: 10 
				Button{}

				onItemAdded:
					item.caption = index 
			}
			Button{ buttonColor: "blue"; caption: "." }	
			Button{ buttonColor: "red"; caption: "=" }	
		}

		Operator { 
			x: 250
			y: 78 
			caption: "+" 
		}
		Operator { 
			x: 250
			y: 128
			caption: "-" 
		}
		Operator { 
			x: 250
			y: 178
			caption: "*" 
		}
		Operator { 
			x: 250
			y: 228
			caption: "/" 
		}
	}
}
