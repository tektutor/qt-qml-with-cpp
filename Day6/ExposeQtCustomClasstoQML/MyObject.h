#include <QObject>
#include <QDebug>
#include <QString>

class MyObject : public QObject {
Q_OBJECT
public:
    MyObject();
    ~MyObject();

    Q_INVOKABLE QString sayHello();
};
