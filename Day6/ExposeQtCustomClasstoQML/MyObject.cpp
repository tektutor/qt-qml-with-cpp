#include "MyObject.h"

MyObject::MyObject() {
    qDebug() << "MyObject constructor ..." << endl;
}

MyObject::~MyObject() {
    qDebug() << "MyObject destructor ..." << endl;
}

QString MyObject::sayHello() {
    return "Hello Qt !";
}
