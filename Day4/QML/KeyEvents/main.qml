import QtQuick 2.5

Rectangle {

	width: 1000; height: 800

	color: "green"

	Row {
	      Repeater {
		model: 50
		Wall{}
	      }
	}

	Row {
	      x: 0; y: 775
	      Repeater {
		model: 50
		Wall{}
	      }
	}
	Column {
		x:0; y: 0
	      	Repeater {
			model: 50
			Wall{}
	      }
	}
	Column {
		x:975; y: 0 
	      	Repeater {
			model: 50
			Wall{}
	      }
	}

	Square {
		x: 50; y: 50
	}
}
