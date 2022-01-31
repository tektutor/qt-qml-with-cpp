#include "mobile.h"

//IPhone class is extending the Mobile base class
class IPhone : public Mobile {

public:
    IPhone();
    ~IPhone();
    void makeCall ( string mobileNumber );
};