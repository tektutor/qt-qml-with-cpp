
#ifndef __MOBILE_H
#define __MOBILE_H

#include <iostream>
using namespace std;

class Mobile {

private:
    string mobileNumber;

protected:
    string protectedVariable;

public:
    string publicVariable;

public:
    Mobile();
    Mobile( string contactNo );
    Mobile( const Mobile& mobile );
    ~Mobile();

    virtual void makeCall ( string mobileNumber );
};

#endif