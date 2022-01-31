#include "mobile.h"

//Default constructor
Mobile::Mobile() {
    cout << "Inside mobile constructor ..." << endl;
    publicVariable = 100;
    protectedVariable = 200;
}

//Overloaded constructor
Mobile::Mobile( string contactNo ) {
    this->mobileNumber = contactNo;
}

// Copy constructor - when new object has to be created with the values of another existing existing object
// copy constructor will be invoked
Mobile::Mobile( const Mobile& mobile ) {
    cout << "Inside Mobile Copy constructor invoked" << endl;
}


Mobile::~Mobile() {
    cout << "Inside mobile destructor ..." << endl;
}

void Mobile::makeCall ( string mobileNumber ) {
    cout << "Calling " << mobileNumber << " ..." << endl;
}