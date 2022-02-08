#ifndef __MYDLG_H
#define __MYDLG_H

#include <QDebug>
#include <QDialog>
#include <QHBoxLayout>
#include <QPushButton>
#include <QScopedPointer>

class MyDlg : public QDialog {
Q_OBJECT
private:
	QScopedPointer<QPushButton> ptrBttn1, ptrBttn2, ptrBttn3;
	QScopedPointer<QHBoxLayout> ptrLayout;
public:
	MyDlg();
	~MyDlg();
};

#endif /* __MYDLG_H */
