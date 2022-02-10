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
private slots:
    void onButtonClicked( QString );
};

#endif /* __MYOBJECT_H */
