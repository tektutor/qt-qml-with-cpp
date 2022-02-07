#include <QDialog>
#include <QListWidget>
#include <QHBoxLayout>
#include <QString>
#include "Thread.h"

class ThreadDlg : public QDialog {
Q_OBJECT
private:
	QListWidget *pListWidget;
	QHBoxLayout *pLayout;
	Thread *pThread;
	QString name;

public:
	ThreadDlg(QString);
	void start();
	void stop();

};
