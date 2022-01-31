#include "receiver.h"

Receiver::Receiver(QObject *parent) : QObject(parent)
{

}

void Receiver::onSenderEventReceived(QString msg) {
    qDebug() << "From Receiver slot method ...";
    qDebug() << msg << endl;
}
