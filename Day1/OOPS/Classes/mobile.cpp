#include "mobile.h"

//Default constructor
Mobile::Mobile() {
    cout << "Inside mobile constructor ..." << endl;
}

//Overloaded constructor
Mobile::Mobile( string contactNo ) {
    this->mobileNumber = contactNo;
}

// Copy constructor - when new object has to be created with the values of another existing existing object
// copy constructor will be invoked
Mobile::Mobile( const Mobile& mobile ) {
    cout << "Inide Mobile Copy constructor invoked" << endl;
}


Mobile::~Mobile() {
    cout << "Inside mobile destructor ..." << endl;
}

void Mobile::makeCall ( string mobileNumber ) {
    cout << "Calling " << mobileNumber << " ..." << endl;
}