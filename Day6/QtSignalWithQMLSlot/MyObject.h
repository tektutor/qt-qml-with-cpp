#ifndef __MYOBJECT_H
#define __MYOBJECT_H

#include <QObject>
#include <QDebug>
#include <QString>

class MyObject : public QObject {
Q_OBJECT
public:
    MyObject();
    ~MyObject();
signals:
    void qtSignal ( QString message );
};

#endif /* __MYOBJECT_H */
