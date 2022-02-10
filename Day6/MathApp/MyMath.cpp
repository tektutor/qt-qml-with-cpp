#include "MyMath.h"

MyMath::MyMath() {
    qDebug() << "MyMath constructor ..." << endl;
}

MyMath::~MyMath() {
    qDebug() << "MyMath destructor ..." << endl;
}

double MyMath::add ( double firstValue, double secondValue ) {
    return firstValue + secondValue;
}

double MyMath::subtract ( double firstValue, double secondValue ) {
    return firstValue - secondValue;
}

double MyMath::multiply ( double firstValue, double secondValue ) {
    return firstValue * secondValue;
}

double MyMath::divide ( double firstValue, double secondValue ) {
    return firstValue / secondValue;
}
