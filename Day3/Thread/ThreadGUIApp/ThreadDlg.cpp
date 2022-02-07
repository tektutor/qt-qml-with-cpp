#include "ThreadDlg.h"

ThreadDlg::ThreadDlg( QString name ) {

	this->name = name;

	pListWidget = new QListWidget();
	pLayout = new QHBoxLayout;

	pLayout->addWidget ( pListWidget );
	setLayout ( pLayout );

	pThread = NULL;
	pThread = new Thread( name );

	connect (
		pThread,
		SIGNAL ( sendMessage( QString ) ),
		this,
		SLOT ( onMessageReceived( QString ) )
	);

	isThreadStarted = false;
	isThreadStopped = false;
	isThreadRunning = false;
}

void ThreadDlg::start() {
	if ( NULL != pThread )
		pThread->start();
	else {
		pThread = new Thread( name );
		connect (
			pThread,
			SIGNAL ( sendMessage( QString ) ),
			this,
			SLOT ( onMessageReceived( QString ) )
		);
		pThread->start();
	}

	isThreadStarted = true;
	isThreadRunning = true;
	isThreadStopped = false;

	emit toggleStopButtonStatus( true );
	emit toggleStartButtonStatus( false );
}

void ThreadDlg::stop() {
	qDebug() << name << " requested to stop ..." << endl;
	if ( NULL != pThread )
		pThread->terminate();
	pThread = NULL;

	isThreadStarted = false;
	isThreadRunning = false;
	isThreadStopped = true;

	emit toggleStartButtonStatus( true );
	emit toggleStopButtonStatus( false );
}

void ThreadDlg::onMessageReceived( QString msg ) {
	pListWidget->addItem ( msg );
	pListWidget->setCurrentRow ( pListWidget->count() -1 );
}

void ThreadDlg::updateButtonStatus() {
	if ( isThreadStarted )	
		emit toggleStopButtonStatus( true );
	else
		emit toggleStartButtonStatus( true );

	if ( isThreadRunning )
		emit toggleStartButtonStatus( false ); 
	else
		emit toggleStopButtonStatus( false ); 
}
