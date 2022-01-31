#include "Sender.h"

Sender::Sender(QObject *parent) : QObject(parent)
{

}

void Sender::emitCustomSignal(QString msg) {
    emit myCustomSignal(msg);
}

