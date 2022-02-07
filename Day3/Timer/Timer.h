#include <QObject>
#include <QTimer>
#include <QDebug>

class Timer : public QObject {
Q_OBJECT
private:
	QTimer *pTimer;
public:
 	Timer();
protected slots:
   void onTimerEvent();

};
