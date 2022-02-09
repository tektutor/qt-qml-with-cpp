import QtQuick 2.5

Item {
	width: 500
	height: 300

	property double firstValue
	property double secondValue
	property double resultValue 


	function add( ) {
		firstValue = parseFloat( firstInput.getValue() )
		secondValue = parseFloat( secondInput.getValue() )
		resultValue = parseFloat( firstValue + secondValue )
		result.textValue= resultValue
	}

	function subtract( ) {
		firstValue = parseFloat( firstInput.getValue() )
		secondValue = parseFloat( secondInput.getValue() )
		resultValue = parseFloat( firstValue - secondValue )
		result.textValue= resultValue
	}

	function multiply( ) {
		firstValue = parseFloat( firstInput.getValue() )
		secondValue = parseFloat( secondInput.getValue() )
		resultValue = parseFloat( firstValue * secondValue )
		result.textValue= resultValue
	}

	function divide( ) {
		firstValue = parseFloat( firstInput.getValue() )
		secondValue = parseFloat( secondInput.getValue() )
		resultValue = parseFloat( firstValue / secondValue )
		result.textValue= resultValue
	}

	Rectangle  {
		width: 495
		height: 295
	
		border.width: 5	
		border.color: "blue"

		radius: 10

		anchors.horizontalCenter: parent.horizontalCenter
		anchors.verticalCenter: parent.verticalCenter

		Column {
			spacing: 5
			anchors.horizontalCenter: parent.horizontalCenter
			anchors.verticalCenter: parent.verticalCenter
			Row {
				spacing: 5
				Label { textValue: "First Input" }
				Edit { id:firstInput; textValue: "0.0" }
			}

			Row {
				spacing: 5
				Label { textValue: "Second Input" }
				Edit { id:secondInput; textValue: "0.0" }
			}

			Row {
				spacing: 5
				Label { textValue: "Result" }
				Edit { id:result; textValue: "0.0" }
			}
			
			Row {
				spacing: 5
				Button { 
					caption: "Add" 
					onButtonClicked: {
						console.log( "Add button clicked" );
						add();
					}
				}
				Button { 
					caption: "Subtract" 
					onButtonClicked: {
						console.log( "Subtract button clicked");
						subtract();
					}
				}
				Button { caption: "Multiply" 
					onButtonClicked: {
						console.log( "Multiply button clicked");
						multiply();
					}
				}
				Button { caption: "Divide" 
					onButtonClicked: {
						console.log( "Divide button clicked");
						divide();
					}
				}
			}
		}
	}
}
