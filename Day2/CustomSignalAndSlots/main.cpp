#include <QCoreApplication>
#include "Sender.h"
#include "receiver.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Sender *pSender = new Sender();
    Receiver *pReceiver = new Receiver();

    QObject::connect(pSender,SIGNAL(myCustomSignal(QString)),pReceiver,SLOT(onSenderEventReceived(QString)));

    pSender->emitCustomSignal(QString("Message from Sender ..."));
    QObject::disconnect(pSender,SIGNAL(myCustomSignal(QString)),pReceiver,SLOT(onSenderEventReceived(QString)));

    pSender->emitCustomSignal(QString("Message from Sender ..."));

    return a.exec();
}
