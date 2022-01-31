#include "mobile.h"

int main ( void ) {

    //mobile object created in heap memory
    Mobile *ptrMobile = NULL;
    ptrMobile = new Mobile();    // constructor - 1
    ptrMobile->makeCall("234-645-5623");

    cout << "Creating mobile instance in stack memory" << endl;
    //mobile object created in stack i.e local variable
    Mobile mobile; // constructor - 2
    mobile.makeCall("123-456-7890");

    vector<Mobile> mobileVector;

    //Here vector makes a copy of mobile object into another mobile object. The copied mobile object gets stored inside
    //vector
    mobileVector.push_back( mobile ); // copy constructor - 1

    // copy constructor will be invoked to copy mobile object that was inserted in line 19 to new location
    mobileVector.push_back( mobile ); // copy constructor - 1

    
    cout << "Before ...." << endl;
    cout << "Vector capacity : " << mobileVector.capacity() << endl;
    cout << "Vector size : " << mobileVector.size() << endl;

    mobileVector.push_back( *ptrMobile ); // copy constructor - 2

    cout << "After ...." << endl;
    cout << "Vector capacity : " << mobileVector.capacity() << endl;
    cout << "Vector size : " << mobileVector.size() << endl;

    //vector<Mobile>::iterator mobileIterator = mobileVector.begin();
    //mobileIterator->makeCall("111-222-3333");
    
    if ( NULL != ptrMobile )
        delete ptrMobile; // Destructor - 1

 
    // Destructor of mobile object that got created in line 16 will be invoked here
    // Destructor of mobile object that was created by vector will be invoked here
    return 0;
}