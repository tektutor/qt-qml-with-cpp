#include "MyObject.h"


MyObject::MyObject() {

}

MyObject::~MyObject() {

}

void MyObject::onButtonClicked( QString msg ) {
    qDebug() << "MyObject onButtonClicked slot";
    qDebug() << msg << endl;
}
