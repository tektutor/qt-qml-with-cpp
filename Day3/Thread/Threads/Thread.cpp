#include "Thread.h"

Thread::Thread(QString name) {
	this->name = name;
}

void Thread::run() {

	for ( int count=0; count < 30000; ++count )
		qDebug() << name <<  " => " << endl;	
	}

}
