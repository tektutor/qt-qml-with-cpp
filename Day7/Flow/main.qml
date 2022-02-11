import QtQuick 2.5
import QtQuick.Controls 1.5

Item {
    width: 500
    height:600

    Flow {
        width: parent.width
        height: parent.height

        anchors.centerIn: parent        

        Repeater {
            model: 100 
            Button{ }
            onItemAdded:
                item.text = "Button " + index
        }
    }
    
}
