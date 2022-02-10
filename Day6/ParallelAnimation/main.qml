import QtQuick 2.5

Item {
    width: 650 
    height: 800

    Rectangle {
        id: blueRect

        x: 0
        y: 0 

        width: 50
        height: 50
    
        color: "blue"

        SequentialAnimation {        
            running: true
            loops: 100

            ParallelAnimation {
                NumberAnimation { target: blueRect; property: "x"; to: 600; duration: 2000; easing.type: Easing.InOutElastic } 
                NumberAnimation { target: blueRect; property: "y"; to: 750; duration: 2000; easing.type: Easing.InOutElastic } 
                ColorAnimation  { target: blueRect; property: "color"; to: "green" }
            }

            ParallelAnimation {
                NumberAnimation { target: blueRect; property: "x"; to: 0; duration: 2000; easing.type: Easing.InCubicElastic } 
                NumberAnimation { target: blueRect; property: "y"; to: 0; duration: 2000; easing.type: Easing.OutCubicElastic } 
                ColorAnimation  { target: blueRect; property: "color";  to: "blue" }
            }
        }
    
    } 

    Rectangle {
        id: redRect

        x: 600 
        y: 750 

        width: 50
        height: 50
    
        color: "red"

        SequentialAnimation {        
            running: true
            loops: 100

            ParallelAnimation {
                NumberAnimation { target: redRect; property: "x"; to: 0; duration: 2000; easing.type: Easing.InOutElastic } 
                NumberAnimation { target: redRect; property: "y"; to: 0; duration: 2000; easing.type: Easing.OutInElastic } 
                ColorAnimation  { target: redRect; property: "color"; to: "yellow" }
            }

            ParallelAnimation {
                NumberAnimation { target: redRect; property: "x"; to: 600; duration: 2000; easing.type: Easing.OutInElastic } 
                NumberAnimation { target: redRect; property: "y"; to: 750; duration: 2000; easing.type: Easing.InOutElastic } 
                ColorAnimation  { target: redRect; property: "color"; to: "black" }
            }
        }
    
    } 
}
