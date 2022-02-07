#include <QThread>
#include <QString>
#include <QDebug>

class Thread : public QThread {
private:
	QString name;
public:
   Thread(QString);
   void run();
};
