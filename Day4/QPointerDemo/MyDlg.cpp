#include "MyDlg.h"

MyDlg::MyDlg() {
	qDebug() << "MyDlg constructor ..." << endl;

	//Raw pointers
	ptrBttn1 = new QPushButton("Button 1");
	ptrBttn2 = new QPushButton("Button 2");
	ptrBttn3 = new QPushButton("Button 3");

	ptrLayout = new QHBoxLayout;

	//QPointer objects pointing to raw pointers
	QPointer<QPushButton> pBttn1 = ptrBttn1;
	QPointer<QPushButton> pBttn2 = ptrBttn2;
	QPointer<QPushButton> pBttn3 = ptrBttn3;

	qDebug() << "Raw pointer => ptrBttn1 address " << ptrBttn1 << endl;
	qDebug() << "QPointer => pBttn1 address " << pBttn1 << endl;
	delete ptrBttn1;
	ptrBttn1 = NULL;
	//qDebug() << "ptrBttn1 address " << ptrBttn1 << endl;
	qDebug() << "pBttn1 address " << pBttn1 << endl;

	QPointer<QHBoxLayout> pLayout = ptrLayout;

	if ( pBttn1 )
		pLayout->addWidget ( pBttn1 );
	if ( pBttn2 )
		pLayout->addWidget ( pBttn2 );
	if ( pBttn3 )
		pLayout->addWidget ( pBttn3 );

	setLayout ( pLayout );
}

MyDlg::~MyDlg() {
	qDebug() << "MyDlg destructor ..." << endl;

	qDebug() << "Size of QPushButton is " << sizeof(QPushButton) << " bytes" << endl;
	qDebug() << "Size of QHBoxLayout is " << sizeof(QHBoxLayout) << " bytes" << endl;

	if ( NULL != ptrBttn1 ) {
		delete ptrBttn1;
	}

	if ( NULL != ptrBttn2 )
		delete ptrBttn2;

	if ( NULL != ptrBttn3 )
		delete ptrBttn3;

	if ( NULL != ptrLayout )  
		delete ptrLayout;
}
