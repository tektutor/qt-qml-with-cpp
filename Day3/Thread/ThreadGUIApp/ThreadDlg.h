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

	bool isThreadStarted, isThreadStopped, isThreadRunning;
protected slots:
	void onMessageReceived( QString );

signals:
   void toggleStartButtonStatus(bool);
   void toggleStopButtonStatus(bool);

public:
	ThreadDlg(QString);
	void start();
	void stop();

	void updateButtonStatus();

};
