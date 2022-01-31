#include <iostream>
#include <memory>
#include "father.h"
#include "mother.h"
#include "child.h"
using namespace std;

/*
class MyClass {
private:
    char ch;
    int x;
    float f;
    double d;

public:
    MyClass() {
        cout << "Inside myclass constructor" << endl;
    }
    ~MyClass() {
        cout << "Inside myclass destructor" << endl;
    }

    void print() {
        cout << "Inside MyClass print method ..." << endl;
    }

};

class SmartPointer {
private:
    MyClass *ptrMyClass;
public:
    SmartPointer() {
        ptrMyClass = new MyClass();
    }

    ~SmartPointer() {
        delete ptrMyClass;
    }

    void print() {
        ptrMyClass->print();
    }

    MyClass* operator -> () {
        return ptrMyClass;
    }

};
*/

int main(int argc, char const *argv[])
{
    //Raw pointers are used - prone to memory leak
    //MyClass *ptrMyClass = new MyClass;
    //cout << sizeof(MyClass) << " bytes are leaked." << endl;

    //SmartPointer smartPtr;
    //smartPtr.print(); 
    //We need our end-users to invoke print method of MyClass via smartpointer object as smartPtr->print()
    //smartPtr->print();

//    unique_ptr<MyClass> myclassPtr( new MyClass() );
//    myclassPtr->print();

    //shared_ptr<MyClass> 

    // MyClass *ptr1 = new MyClass();
    // MyClass *ptr2 = ptr1;   //assignment also need to take care of reference 

    // MyClass ptr3 = ptr2;
    // someMethod (  ptr3 );   //implicit assignment somePtr = ptr3

    // ptr1->print();
    // ptr2->print();

    shared_ptr<Mother> sonia ( new Mother("Sonia") );
    shared_ptr<Father> rajiv ( new Father("Rajiv") );
    shared_ptr<Child>  rahul ( new Child("Rahul", rajiv, sonia) );

    sonia->setChild( rahul ); 
    rajiv->setChild( rahul );

    sonia->printProfile();
    rajiv->printProfile();
    rahul->printProfile();

    cout << "How many times rajiv object is referred ? " << rajiv.use_count() << endl;
    cout << "How many times sonia object is referred ? " << sonia.use_count() << endl;
    cout << "How many times rahul object is referred ? " << rahul.use_count() << endl;

    cout << "Size of mother object " << sizeof(sonia) << " bytes." << endl;
    cout << "Size of mother object " << sizeof(rajiv) << " bytes." << endl;
    cout << "Size of mother object " << sizeof(rahul) << " bytes." << endl;

    return 0;
}
