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
    v.push_back(30);        
    cout << "Capacity of vector is " << v.capacity() << endl;
    cout << "Size of vector after inserting 30 is " << v.size() << endl;

    v.push_back(40);        
    cout << "Capacity of vector is " << v.capacity() << endl;
    cout << "Size of vector after inserting 40 is " << v.size() << endl;

    v.push_back(50);        //
    cout << "Capacity of vector is " << v.capacity() << endl;
    cout << "Size of vector after inserting 50 is " << v.size() << endl;

    //Worst case scenario - appending values to a vector - Runtime efficiency O(N)
    //Besc case scenario - appending values to a vector - Runtime efficiency O(1)

    return 0;
}