#include "MyDlg.h"

MyDlg::MyDlg() {
	qDebug() << "MyDlg constructor ..." << endl;

	//Scoped pointer now pointer to MyClass object in heap
	ptrMyClass.reset ( new MyClass() );
	ptrMyClass->someMethod();
}

MyDlg::~MyDlg() {
	qDebug() << "MyDlg destructor ..." << endl;
}
