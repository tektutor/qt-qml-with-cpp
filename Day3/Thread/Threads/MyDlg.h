#include <QDialog>
#include <QPushButton>
#include <QHBoxLayout>
#include <QDebug>
#include "Thread.h"

class MyDlg : public QDialog {
Q_OBJECT
private:
   QPushButton *pStartLoopBttn;
   QHBoxLayout *pLayout;
   Thread *pThread1, *pThread2, *pThread3;
public:
   MyDlg();
protected slots:
   void onButtonClicked();

};
