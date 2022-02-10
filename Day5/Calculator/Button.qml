import QtQuick 2.5

Rectangle {
	width: 50
	height: 50

	property var caption: "B"
	property var buttonColor: "black"

	Rectangle {
		width:  43 
		height: 43

		anchors.horizontalCenter: parent.horizontalCenter
		anchors.verticalCenter: parent.verticalCenter

		border.width: 1
		border.color: "black"
		radius: 10

		gradient: Gradient {
			GradientStop { position: 0.0; color: "white" }
			GradientStop { position: 0.1; color: buttonColor }
		}
		
		Text {
			anchors.horizontalCenter: parent.horizontalCenter
			anchors.verticalCenter: parent.verticalCenter

			text: caption
			color: "white"
			font.pointSize: 12
		}
	}

	function computeResult() {
		if ( calculator.operatorSelected == "+" ) {
			calculator.resultValue = calculator.firstValue + calculator.secondValue;
		}
		else if ( calculator.operatorSelected == "-" ) {
			calculator.resultValue = calculator.firstValue - calculator.secondValue;
		}
		else if ( calculator.operatorSelected == "*" ) {
			calculator.resultValue = calculator.firstValue * calculator.secondValue;
		}
		else if ( calculator.operatorSelected == "/" ) {
			calculator.resultValue = calculator.firstValue / calculator.secondValue;
		}
	}

	MouseArea {
		anchors.fill: parent

		onClicked:
			if ( caption != "=" )
				display.value = display.value + caption;
			else if ( caption == "=" ) {
				calculator.secondValue = parseFloat ( display.value );
				computeResult( )
				display.value = calculator.resultValue.toString()
			}
	}

}
