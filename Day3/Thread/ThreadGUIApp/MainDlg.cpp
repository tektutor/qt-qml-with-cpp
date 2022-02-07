#include "MainDlg.h"

int MainDlg::count = 0;

MainDlg::MainDlg() {

	setWindowTitle ( "Threads Demo" );

	setMinimumWidth ( 500 );
	setMinimumHeight ( 500 );
	setMaximumHeight ( 500 );
	setMaximumWidth( 500 );

	pButtonLayout = new QHBoxLayout;

	pBttnStart = new QPushButton("Start Thread");
	pBttnStop  = new QPushButton("Stop Thread");
	pBttnNew   = new QPushButton("New Thread");
	pBttnClose = new QPushButton("Close App");

	pButtonLayout->addStretch();
	pButtonLayout->addWidget ( pBttnNew );
	pButtonLayout->addWidget ( pBttnStart );
	pButtonLayout->addWidget ( pBttnStop );
	pButtonLayout->addWidget ( pBttnClose);

	pBttnStop->setEnabled ( false );
	pBttnStart->setEnabled ( false );

	pMainLayout = new QVBoxLayout;

	pTabWidget  = new QTabWidget();

	pMainLayout->addWidget ( pTabWidget );
	pMainLayout->addLayout ( pButtonLayout );

	setLayout ( pMainLayout );

	connect (
		pBttnNew, 
		SIGNAL ( clicked() ),
		this,
		SLOT ( onNewButtonClicked() )
	);

	connect (
		pBttnStart, 
		SIGNAL ( clicked() ),
		this,
		SLOT ( onStartButtonClicked() )
	);
	connect (
		pBttnStop, 
		SIGNAL ( clicked() ),
		this,
		SLOT ( onStopButtonClicked() )
	);
	connect (
		pBttnClose, 
		SIGNAL ( clicked() ),
		this,
		SLOT ( onCloseButtonClicked() )
	);

	connect (
		pTabWidget,
		SIGNAL ( currentChanged(int) ),
		this,
		SLOT ( onTabChanged(int) )

	);

}

void MainDlg::onNewButtonClicked() {
	qDebug() << "New Button clicked ..." << endl;

	QString tabCaption = "Thread ";
	QString strTabCount;
	strTabCount.setNum ( ++count );
	tabCaption.append ( strTabCount );

	ThreadDlg *pThreadDlg = new ThreadDlg( tabCaption );
	pTabWidget->addTab (  pThreadDlg, tabCaption );

	connect (
		pThreadDlg,
		SIGNAL ( toggleStopButtonStatus(bool) ),
		this,
		SLOT ( onToggleStopButton(bool) )
	);

	connect (
		pThreadDlg,
		SIGNAL ( toggleStartButtonStatus(bool) ),
		this,
		SLOT ( onToggleStartButton(bool) )
	);

	pThreadDlg->updateButtonStatus();
}

void MainDlg::onStartButtonClicked() {
	qDebug() << "Start Button clicked ..." << endl;
	((ThreadDlg*)pTabWidget->currentWidget())->start();
}

void MainDlg::onStopButtonClicked() {
	qDebug() << "Stop Button clicked ..." << endl;
	((ThreadDlg*)pTabWidget->currentWidget())->stop();
}

void MainDlg::onCloseButtonClicked() {
	qDebug() << "Close Button clicked ..." << endl;
	close();
}

void MainDlg::onTabChanged( int index ) {
	qDebug() << "Tab switched ..." << endl;
	ThreadDlg *pThreadDlg = (ThreadDlg*) pTabWidget->currentWidget();
	pThreadDlg->updateButtonStatus();
	
}

void MainDlg::onToggleStopButton( bool shouldEnable ) {		
	pBttnStop->setEnabled( shouldEnable );
}

void MainDlg::onToggleStartButton( bool shouldEnable ) {		
	pBttnStart->setEnabled( shouldEnable );
}
