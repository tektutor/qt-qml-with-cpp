#include <QThread>
#include <QString>
#include <QDebug>
#include <QWaitCondition>
#include <QMutex>

enum WORK_TYPE {
	DIGGER = 0,
	PLANTER = 1,
	FILLER = 2
};

class Thread : public QThread {
private:
	QString name;
	WORK_TYPE typeOfWork;
	QWaitCondition diggerCondition, planterCondition, fillerCondition;
	static QMutex pit;
	static QString currentStatus;
public:	
  Thread( WORK_TYPE );
  void startWork();
  void run();
};
