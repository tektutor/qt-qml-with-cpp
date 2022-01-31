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

    listOfIntegers.

    //assigning the starting element location to the pos iterator
    pos = listOfIntegers.begin();

    cout << endl;
    //List elements after sorting ...
    while ( pos != listOfIntegers.end() ) {
        cout << *pos << "\t";
        ++pos; //Navigating to the next element position
    }

    return 0;
}