#include "MainDlg.h"

MainDlg::MainDlg() {

	pBttnPrev = new QPushButton("Previous");
	pBttnNext = new QPushButton("Next");
	pBttnQuit = new QPushButton("Quit");

	pButtonLayout = new QBoxLayout(QBoxLayout::LeftToRight );

	pButtonLayout->addStretch();
	pButtonLayout->addWidget ( pBttnPrev );
	pButtonLayout->addWidget ( pBttnNext );
	pButtonLayout->addWidget ( pBttnQuit );

	pHBoxDlg = new HBoxDlg;	
	pVBoxDlg = new VBoxDlg;	
	pBoxDlg  = new BoxDlg;
	pGridDlg = new GridDlg();

	pStackLayout = new QStackedLayout;

	pStackLayout->addWidget ( pHBoxDlg );
	pStackLayout->addWidget ( pVBoxDlg );
	pStackLayout->addWidget ( pBoxDlg );
	pStackLayout->addWidget ( pGridDlg );
	
	pMainLayout = new QVBoxLayout;

	pMainLayout->addLayout ( pStackLayout );
	pMainLayout->addLayout ( pButtonLayout );

	setLayout ( pMainLayout );

	connect (
		pBttnPrev,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onPrevButtonClicked() )
	);

	connect (
		pBttnNext,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onNextButtonClicked() )
	);

	connect (
		pBttnQuit,
		SIGNAL ( clicked() ),
		this,
		SLOT ( onQuitButtonClicked() )
	);

	int index = pStackLayout->currentIndex();

	if ( HBOX == index )
		pBttnPrev->setEnabled ( false );

}

void MainDlg::onPrevButtonClicked() {
	int currentIndex = pStackLayout->currentIndex();	
	if ( HBOX == currentIndex ) {
		//pBttnPrev->setEnabled ( false );
	}
	else {
		pStackLayout->setCurrentIndex ( --currentIndex );
		//pBttnPrev->setEnabled ( true );
	}
	pBttnNext->setEnabled ( true );
}

void MainDlg::onNextButtonClicked() {
	int currentIndex = pStackLayout->currentIndex();	

	if ( GRID == currentIndex ) {
		//pBttnPrev->setEnabled ( true );
		//pBttnNext->setEnabled ( false );
	}
	else {
		pStackLayout->setCurrentIndex ( ++currentIndex );
		//pBttnNext->setEnabled ( false );
	}
}

void MainDlg::onQuitButtonClicked() {
	close();
}
