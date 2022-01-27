### Installing MingGW 64-bit in Windows 10 or later
For detailed instructions, refer the official web page https://www.msys2.org/

Download the latest version of mingw installer https://github.com/msys2/msys2-installer/releases/download/2022-01-18/msys2-x86_64-20220118.exe

Launch the installer with install mingGW 64-bit with all defaults.

### Make sure the mingGW environment settings path is added to your system
1. From your windows start menu --> search for "env" then select "edit the system environment variables"
2. Add the PATH C:\msys64\mingw64\bin both system level and user level

### Launch mingGW command prompt
1. Windows start menu --> MYSYS2 64-bit --> MYSYS2 MSYS
2. g++ --version
3. gdb --version

### Install mingGW development tools
```
pacman -Syu
pacman -Su
pacman -S --needed base-devel mingw-w64-x86_64-toolchain
```
### Install Visual Studio code latest version of Editor
Refer the below instructions and install Visual Studio code and necessary extensions.
https://code.visualstudio.com/docs/cpp/config-mingw


### Vector Lab exercise
Below is the code present in main.cpp source file

```
#include <iostream>
#include <vector>
using namespace std;

// Single line comment - C++ style comment

/*  multi-line comment - c style comment
 ** What is vector?
 ** Vector is a Dynamic array that grows on demand
 ** Array Benefits
 **  - Random access is possible - O(1) runtime efficiency
 ** Array drawbacks
 **  - need to know the size upfront 
 **  - can't be resized once created
*/

int main ( void ) {

    vector<int> v;  // [] vector creates a vector of integers of size 0

    cout << "Initial size of vector is " << v.size() << endl;
    cout << "Capacity of vector is " << v.capacity() << endl;
    v.push_back(10);        //[10] - size of vector is 1
    cout << "Capacity of vector is " << v.capacity() << endl;
    cout << "Size of vector after inserting 10 is " << v.size() << endl;
    v.push_back(20);        //vector creates a new array of size 2 
                            //and then copies the value 10 from old array to new array 
                            //and then appends 20 to the new array. 
    cout << "Capacity of vector is " << v.capacity() << endl;
    cout << "Size of vector after inserting 20 is " << v.size() << endl;
    v.push_back(30);        //
    cout << "Capacity of vector is " << v.capacity() << endl;
    cout << "Size of vector after inserting 30 is " << v.size() << endl;

    v.push_back(40);        //
    cout << "Capacity of vector is " << v.capacity() << endl;
    cout << "Size of vector after inserting 40 is " << v.size() << endl;

    v.push_back(50);        //
    cout << "Capacity of vector is " << v.capacity() << endl;
    cout << "Size of vector after inserting 50 is " << v.size() << endl;

    //Worst case scenario - appending values to a vector - Runtime efficiency O(N)
    //Besc case scenario - appending values to a vector - Runtime efficiency O(1)

    return 0;
}
```

##### Compiling the application
```
g++ main.cpp
```

##### Running the application
```
./a.exe
```

### List lab exercise
```
#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main ( void ) {

    list<int> listOfIntegers;

    listOfIntegers.push_back(10);
    listOfIntegers.push_back(5);
    listOfIntegers.push_back(15);
    listOfIntegers.push_back(7);

    list<int>::iterator pos = listOfIntegers.begin(); 

    while ( pos != listOfIntegers.end() ) {
        cout << *pos << "\t";
        ++pos; 
    }

    return 0;
}
```

##### Compiling the application
```
g++ main.cpp
```

##### Running the application
```
./a.exe
```

### Sorting List elements
```
#include <iostream>
#include <list>
#include <iterator>
using namespace std;

int main ( void ) {

    list<int> listOfIntegers;

    listOfIntegers.push_back(10);
    listOfIntegers.push_back(5);
    listOfIntegers.push_back(15);
    listOfIntegers.push_back(7);

    list<int>::iterator pos = listOfIntegers.begin(); 

    cout << endl;
    //List elements before sorting ...
    while ( pos != listOfIntegers.end() ) {
        cout << *pos << "\t";
        ++pos; 
    }

    listOfIntegers.sort();

    pos = listOfIntegers.begin();

    cout << endl;
    //List elements after sorting ...
    while ( pos != listOfIntegers.end() ) {
        cout << *pos << "\t";
        ++pos; 
    }

    return 0;
}
```

### Inheritance Lab exercise
mobile.h
```

#ifndef __MOBILE_H
#define __MOBILE_H

#include <iostream>
using namespace std;

class Mobile {

private:
    string mobileNumber;

protected:
    string protectedVariable;

private:
    string privateVariable;

public:
    Mobile();
    Mobile( string contactNo );
    Mobile( const Mobile& mobile );
    ~Mobile();

    virtual void makeCall ( string mobileNumber );
};

#endif
```

mobile.cpp
```
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
    cout << "Inside Mobile Copy constructor invoked" << endl;
}


Mobile::~Mobile() {
    cout << "Inside mobile destructor ..." << endl;
}

void Mobile::makeCall ( string mobileNumber ) {
    cout << "Calling " << mobileNumber << " ..." << endl;
}
```

iphone.h
```
#include "mobile.h"

//IPhone class is extending the Mobile base class
class IPhone : public Mobile {

public:
    IPhone();
    ~IPhone();
    void makeCall ( string mobileNumber );
};
```

iphone.cpp
```
#include "iphone.h"

IPhone::IPhone() {
    cout << "IPhone constructor ..." << endl;
}

IPhone::~IPhone() {
    cout << "IPhone destructor ..." << endl;
}


//We are overriding the base class implementation of makeCall method
void IPhone::makeCall ( string mobileNumber ) {
    Mobile::makeCall( mobileNumber ); //We are reusing makeCall method logic from baseclass here - optional
    cout << "Inside IPhone makecall" << endl;
}
```

main.cpp
```
#include <iostream>
#include "iphone.h"
using namespace std;

int main(int argc, char const *argv[])
{
    Mobile *ptrMobile = new IPhone();
    ptrMobile->makeCall( "123-456-7890");

    return 0;
}
```

##### Compiling and running the application
```
g++ *.cpp
a.exe
```
