#include "Timer.h"

Timer::Timer() {

	pTimer = new QTimer();
	pTimer->start( 1000 );

	connect (
		pTimer,
		SIGNAL ( timeout() ),
		this,
		SLOT ( onTimerEvent() )
	);
}


void Timer::onTimerEvent( ) {
	qDebug() << "Timer event triggered ..." << endl;
}

