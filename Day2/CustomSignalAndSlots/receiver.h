#ifndef RECEIVER_H
#define RECEIVER_H

#include <QObject>
#include <QString>
#include <QDebug>

class Receiver : public QObject
{
    Q_OBJECT
public:
    explicit Receiver(QObject *parent = nullptr);

protected slots:
    void onSenderEventReceived(QString);
signals:

};

#endif // RECEIVER_H
