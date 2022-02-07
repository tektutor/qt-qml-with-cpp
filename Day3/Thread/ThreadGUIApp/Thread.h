#include <QThread>
#include <QString>
#include <QDebug>

class Thread : public QThread {
Q_OBJECT
private:
	QString name;
public:
	Thread( QString );
protected:
	void run();
};
