#include "Thread.h"

Thread::Thread(QString name) {
	this->name = name;
}

void Thread::run() {

	while ( 1 ) {

		qDebug() << name << endl;
	}
}

