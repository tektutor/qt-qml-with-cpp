#ifndef MYMATH_H
#define MYMATH_H

#include <QObject>
#include <QDebug>

class MyMath : public QObject {
Q_OBJECT

public:
    MyMath();
    ~MyMath();

    Q_INVOKABLE double add (double firstValue, double secondValue);
    Q_INVOKABLE double subtract (double firstValue, double secondValue);
    Q_INVOKABLE double multiply (double firstValue, double secondValue);
    Q_INVOKABLE double divide (double firstValue, double secondValue);

};

#endif /* MYMATH_H */
