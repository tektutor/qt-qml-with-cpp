#include "Thread.h"

Thread::Thread(QString name) {
	this->name = name;
	setTerminationEnabled( true );
}

void Thread::run() {

	while ( 1 ) {
          	if ( QThread::currentThread()->isInterruptionRequested() ) {
			qDebug() << name << " stopped ..." << endl;
              		return;
		}
		emit sendMessage ( name );
		sleep( 1 );
	}
}

