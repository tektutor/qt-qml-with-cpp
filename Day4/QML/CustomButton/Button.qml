import QtQuick 2.5

Rectangle {
      width: 182; height: 92

      border.width: 2
      border.color: "white"
      radius: 50

      property var caption: "Button"
      property var textColor: "red"
      property var buttonColor: "white"

      Rectangle {
		width: 180; height: 90 

		anchors.horizontalCenter: parent.horizontalCenter
		anchors.verticalCenter: parent.verticalCenter

		border.color: "black"
		border.width: 2
	
		color: buttonColor

		radius: 50
		
		Text {
			text: caption 
			anchors.horizontalCenter: parent.horizontalCenter
			anchors.verticalCenter: parent.verticalCenter
			color: textColor 
			font.pixelSize: 30
		} 
      }	

      MouseArea {
          anchors.fill: parent
          onClicked: { 
		if ( parent.buttonColor == 'red' )
			parent.buttonColor = 'blue'
		else
			parent.buttonColor = 'red' 
	  }
      }
}
