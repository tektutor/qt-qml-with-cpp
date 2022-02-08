#include "Thread.h"

int main ( ) {

	Thread digger(DIGGER);
	Thread planter(PLANTER);
	Thread filler(FILLER);

	digger.start();
	planter.start();
	filler.start();

	QThread::currentThread()->sleep(5);
	digger.startWork();

	digger.wait();
	planter.wait();
	filler.wait();

	return 0;
}
