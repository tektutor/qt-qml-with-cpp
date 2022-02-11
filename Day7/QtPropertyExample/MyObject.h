#ifndef MYOBJECT_H
#define MYOBJECT_H

#include <QObject>
#include <QDebug> 
#include <QString>

class MyObject : public QObject {
Q_OBJECT
public:
    Q_PROPERTY(QString name MEMBER m_name READ name WRITE setName NOTIFY nameChanged)
public:
    MyObject();
    ~MyObject();
    QString name();
    void setName(QString name);
    
signals:
    void nameChanged(QString name);
private:
    QString m_name;
};

#endif /* MYOBJECT_H */
