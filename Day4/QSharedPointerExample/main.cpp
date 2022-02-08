#include <QSharedPointer>
#include <QDebug>

class MyClass {
public:
   MyClass() {
	   qDebug() << "MyClass constructor ..." << endl;
   }

   ~MyClass() {
	   qDebug() << "MyClass destructor..." << endl;
   }

   void print() {
	   qDebug() << "MyClass print method ..." <<endl;
   }

};

void someFunction( QSharedPointer<MyClass> ptrMyClass ) {
	ptrMyClass->print(); // reference count will be 3
}// reference count will be 2

int main ( ) {

	QSharedPointer<MyClass> ptr1MyClass ( new MyClass() ); //heap MyClass is referred how many times here => 1
	//QSharedPointer<MyClass> ptr2MyClass ( new MyClass() ); 
	QSharedPointer<MyClass> ptr3MyClass = ptr1MyClass; //heap MyClass obj is referred => 2 times

	ptr1MyClass->print();
	//ptr2MyClass->print();
	ptr3MyClass->print();

	ptr3MyClass.reset(); // ptr3MyClass is done with the usage of MyClass heap object, hence ref count comes down by 1

	someFunction( ptr3MyClass );

	return 0;
}
