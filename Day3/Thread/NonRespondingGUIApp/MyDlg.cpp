#include "MyDlg.h"

MyDlg::MyDlg() {

	pStartLoopBttn = new QPushButton("Start Loop");

	pLayout = new QHBoxLayout();

	pLayout->addWidget ( pStartLoopBttn );

	setLayout ( pLayout );

	connect ( pStartLoopBttn, SIGNAL(clicked()), this, SLOT( onButtonClicked() ) );


}

void MyDlg::onButtonClicked() {
	while ( 1 ) {
		qDebug() << "Infinite loop ..." << endl;
	}
}
