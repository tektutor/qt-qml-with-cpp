import QtQuick 2.5
import QtQuick.Controls 1.5
import Org.TekTutor.MyMath 2.5

Item {
    width: 500
    height:400

    property double firstInput
    property double secondInput
    property double result 

    TekTutorMath {
        id: mathObject
    } 

    Rectangle {
        width: 400
        height: 300

        border.width: 5 
        border.color: "blue"

        anchors.horizontalCenter: parent.horizontalCenter
        anchors.verticalCenter: parent.verticalCenter
        Column {

            anchors.horizontalCenter: parent.horizontalCenter
            anchors.verticalCenter: parent.verticalCenter

            spacing: 5
        
            Row {
                spacing: 5
                Label {
                    text: "First Input"
                    color: "steelblue"
                    width: 100
                }
                TextField {
                    id: firstInputText
                    width: 215
                    validator: DoubleValidator{ bottom: 0.0 }
                }
            }

            Row {
                spacing: 5
                Label {
                    text: "Second Input"
                    color: "steelblue"
                    width: 100
                }
                TextField {
                    id: secondInputText
                    width: 215
                    validator: DoubleValidator{ bottom: 0.0 }
                }
            }

            Row {
                spacing: 5
                Label {
                    text: "Result"
                    color: "steelblue"
                    width: 100
                }
                TextField {
                    id: resultText
                    readOnly: true
                    width: 215
                }
            }
        
            Row {
                Label{ text: "Dummy"; color: "white" }
                Label{ text: "Dummy"; color: "white" }
                Label{ text: "Dummy"; color: "white" }
                Label{ text: "Dummy"; color: "white" }
            }
    
            Row {
                spacing: 5

                Button {
                    id: addBttn
                    text: "Add"
                    onClicked: {
                        console.log ( "Add button clicked" )
                        firstInput = Number(firstInputText.text)
                        secondInput = Number(secondInputText.text)
                        result = mathObject.add( firstInput, secondInput ) 
                        resultText.text = result.toString() 
                    }
                }

                Button {
                    id: subtractBttn
                    text: "Subtract"
                    onClicked: {
                        console.log ( "Subtract button clicked" )
                        firstInput = Number(firstInputText.text)
                        secondInput = Number(secondInputText.text)
                        result = mathObject.subtract( firstInput, secondInput ) 
                        resultText.text = result.toString() 
                    }
                }

                Button {
                    id: multiplyBttn
                    text: "Multiply"
                    onClicked: {
                        console.log ( "Multiply button clicked" )
                        firstInput = Number(firstInputText.text)
                        secondInput = Number(secondInputText.text)
                        result = mathObject.multiply( firstInput, secondInput ) 
                        resultText.text = result.toString() 
                    }
                }

                Button {
                    id: divideBttn
                    text: "Divide"

                    onClicked: {
                        console.log ( "Divide button clicked" )
                        firstInput = Number(firstInputText.text)
                        secondInput = Number(secondInputText.text)
                        result = mathObject.divide( firstInput, secondInput ) 
                        resultText.text = result.toString() 
                    }
                }
            }
        }
    }
}
