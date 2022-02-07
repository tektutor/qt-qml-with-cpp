#include "ThreadDlg.h"

ThreadDlg::ThreadDlg( QString name ) {

	this->name = name;

	pListWidget = new QListWidget();
	pLayout = new QHBoxLayout;

	pLayout->addWidget ( pListWidget );
	setLayout ( pLayout );

	pThread = new Thread( name );

}

void ThreadDlg::start() {
	pThread->start();
}

void ThreadDlg::stop() {
	pThread->quit();
}
