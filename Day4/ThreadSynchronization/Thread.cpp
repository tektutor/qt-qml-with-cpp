#include "Thread.h"

QString Thread::currentStatus = "Idle";
QMutex Thread::pit;

Thread::Thread ( WORK_TYPE typeOfWork ) {
	this->typeOfWork = typeOfWork;

	switch ( typeOfWork ) {
		case DIGGER:
			name = "Digger";
			break;
		case FILLER:
			name = "Filler";
			break;
		case PLANTER:
			name = "Planter";
			break;
	}
}

void Thread::startWork() {
	diggerCondition.wakeOne();
}

void Thread::run() {
	qDebug() << name << " is getting ready ..." << endl;

	while ( 1 ) {
	switch ( typeOfWork )  {
		case DIGGER:
			if ( currentStatus == "Idle" ) {
				qDebug() << name << " is waiting for his gardens tools ...";
				pit.tryLock(3);
				diggerCondition.wait(&pit, 3);
				qDebug() << name << " got his tools to start his work ...";
				qDebug() << name << " digged a pit ...";
				currentStatus = "Digged";
				pit.unlock();
				planterCondition.wakeOne();
				qDebug() << name << " notified planter to start work ..." << endl;
			}
			sleep(5);
			break;
		case PLANTER:
			if (currentStatus == "Digged") {
				qDebug() << name << " is waiting for digger to complete his work ...";
				pit.tryLock(3);
				planterCondition.wait(&pit, 3);
				qDebug() << name << " received notification to start work ...";
				qDebug() << name << " planted a sapling ...";
				currentStatus = "Planted";
				pit.unlock();
				fillerCondition.wakeOne();
				qDebug() << name << " notified filler to start work ..." << endl;
			}
			sleep(5);
			break;
		case FILLER:
			if ( currentStatus == "Planted" ) {
				qDebug() << name << " is waiting for the planter to complete his work ...";
				pit.tryLock(3);
				fillerCondition.wait(&pit, 3);
				qDebug() << name << " received notification to start work ...";
				qDebug() << name << " filled mud and watered the plant ...";
				currentStatus = "Idle";
				pit.unlock();
				diggerCondition.wakeOne();
				qDebug() << name << " notified digger to start his work ..." << endl;
			}
			sleep(5);
			break;
	}
	}
}
