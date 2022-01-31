#include "iphone.h"

IPhone::IPhone() {
    cout << "IPhone constructor ..." << endl;
}

IPhone::~IPhone() {
    cout << "IPhone destructor ..." << endl;
}


//We are overriding the base class implementation of makeCall method
void IPhone::makeCall ( string mobileNumber ) {
    //Child is able to access public method of Parent
    Mobile::makeCall( mobileNumber ); //We are reusing makeCall method logic from baseclass here - optional
    cout << "Inside IPhone makecall" << endl;

    cout << "Child is able to access protected member variable of parent " << this->protectedVariable << endl;
    cout << "Child is able to access public member variable of parent " << this->publicVariable << endl;
    //Private member variables and methods of parent aren't inheritable
    //cout << "Child is not able to access private member variable of parent " << this->mobileNumber << endl;
}
