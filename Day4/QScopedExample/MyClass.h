#include <QObject>
#include <QDebug>

class MyClass : public QObject {
public:
	MyClass() {
		qDebug() << "MyClass constructor ..." << endl;
	}

	~MyClass() {
		qDebug() << "MyClass destructor ..." << endl;
	}

	void someMethod() {
		qDebug() << "MyClass someMethod ..." << endl;
	}
};
