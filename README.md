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
