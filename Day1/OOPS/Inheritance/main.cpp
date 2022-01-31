#include <iostream>
#include "iphone.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Mobile *ptrMobile = new IPhone();
    ptrMobile->makeCall( "123-456-7890");

    return 0;
}