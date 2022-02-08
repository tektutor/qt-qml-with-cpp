import QtQuick 2.5

Rectangle {
	width: 25; height: 25 
	
	border.color: "black"

	gradient: Gradient {
		GradientStop { position: 0.0; color: "white" }
		GradientStop { position: 1.0; color: "blue" }
       }
       focus: true

       Keys.onPressed: { 
		if ( event.key == Qt.Key_Up ) { 
		    if (y > 25 ) 
			y = y - 25
		}
		else if ( event.key == Qt.Key_Down ) {
		    if ( y < 750 )
			y = y + 25
		}
		else if ( event.key == Qt.Key_Left ) { 
		    if ( x > 25 ) 
			x = x - 25
		}
		else if ( event.key == Qt.Key_Right ) {
		    if ( x < 950 )
			x = x + 25
		}

		console.log ( "x = ", x )
		console.log ( "y = ", y )
       }

}
