import QtQuick 2.5
import org.tektutor.myobject 1.5

Item {

    width: 500
    height: 600

    MyObject {
        id: myCppObject1
    }

    MyObject {
        id: myCppObject2
    }

    MouseArea {
        anchors.fill: parent

        onClicked: {
            console.log ( myCppObject1.sayHello() )
            console.log ( myCppObject2.sayHello() )
        }
    }

}
