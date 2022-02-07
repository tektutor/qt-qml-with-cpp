#include "MyDlg.h"

MyDlg::MyDlg() {

	pStartLoopBttn = new QPushButton("Start Loop");

	pLayout = new QHBoxLayout();

	pLayout->addWidget ( pStartLoopBttn );

	setLayout ( pLayout );

	connect ( pStartLoopBttn, SIGNAL(clicked()), this, SLOT( onButtonClicked() ) );


}

void MyDlg::onButtonClicked() {
	pThread1 = new Thread("Thread 1");
	pThread2 = new Thread("Thread 2");
	pThread3 = new Thread("Thread 3");
	pThread1->start();
	pThread2->start();
	pThread3->start();
}
