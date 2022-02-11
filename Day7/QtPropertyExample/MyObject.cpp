#include "MyObject.h"

MyObject::MyObject() {
    qDebug() << "MyObject constructor ..." << endl;
}

MyObject::~MyObject() {
    qDebug() << "MyObject destructor ..." << endl;
}

QString MyObject::name() {
    return m_name;
}

void MyObject::setName( QString name ) {
    m_name = name;
    emit nameChanged(name);
}
