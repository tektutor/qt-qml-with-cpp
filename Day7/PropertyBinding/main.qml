import QtQuick 2.5
import QtQuick.Controls 1.5

Item {
    id: topRect 
    width: 500
    height:600

    property string caption: "Button 1"

    Binding { target: topRect; property: "caption"; value: button.text }

    Button {
        id: button
        text: caption // Property Binding 

        onClicked: {
            console.log ( "Custom caption property value is ", caption )
            console.log ( "Current Button text property is", button.text )
            button.text = "Button 2"
            console.log ( "Updated Button text property is", button.text )
            console.log ( "Custom caption property value is ", caption )
        }
        
    }
    
}
