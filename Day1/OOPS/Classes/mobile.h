
#ifndef __MOBILE_H
#define __MOBILE_H

#include <iostream>
#include <vector>

using namespace std;

class Mobile {

private:
    string mobileNumber;

public:
    Mobile();
    Mobile( string contactNo );
    Mobile( const Mobile& mobile );
    ~Mobile();

    void makeCall ( string mobileNumber );
};

#endif