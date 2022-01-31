#ifndef SENDER_H
#define SENDER_H

#include <QObject>
#include <QString>

class Sender : public QObject
{
    Q_OBJECT
public:
    explicit Sender(QObject *parent = nullptr);
    void emitCustomSignal(QString);

signals:
    void myCustomSignal(QString);
};

#endif // SENDER_H
