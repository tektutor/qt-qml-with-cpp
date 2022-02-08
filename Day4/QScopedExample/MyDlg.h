#ifndef __MYDLG_H
#define __MYDLG_H

#include <QDialog>
#include <QDebug>
#include <QScopedPointer>

#include "MyClass.h"

class MyDlg : public QDialog {
private:
	QScopedPointer<MyClass> ptrMyClass;
public:
	MyDlg();
	~MyDlg();
};

#endif /* __MYDLG_H */
