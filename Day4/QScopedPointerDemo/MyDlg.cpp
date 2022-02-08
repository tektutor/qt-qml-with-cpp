#include "MyDlg.h"

MyDlg::MyDlg() {
	qDebug() << "MyDlg constructor ..." << endl;

	ptrBttn1.reset(new QPushButton("Button 1"));
	ptrBttn2.reset(new QPushButton("Button 2"));
	ptrBttn3.reset(new QPushButton("Button 3"));

	ptrLayout.reset(new QHBoxLayout);

	ptrLayout->addWidget ( ptrBttn1.data() );
	ptrLayout->addWidget ( ptrBttn2.data() );
	ptrLayout->addWidget ( ptrBttn3.data() );

	setLayout ( ptrLayout.data() );
}

MyDlg::~MyDlg() {
	qDebug() << "MyDlg destructor ..." << endl;
}
