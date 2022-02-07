#include "MainDlg.h"

int MainDlg::count = 0;

MainDlg::MainDlg() {

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
}

void MainDlg::onNewButtonClicked() {
	qDebug() << "New Button clicked ..." << endl;

	QString tabCaption = "Thread ";
	QString strTabCount;
	strTabCount.setNum ( ++count );
	tabCaption.append ( strTabCount );

	ThreadDlg *pThreadDlg = new ThreadDlg( tabCaption );
	pTabWidget->addTab (  pThreadDlg, tabCaption );
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
