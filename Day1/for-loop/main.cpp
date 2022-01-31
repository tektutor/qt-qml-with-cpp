#include <iostream>
using namespace std;

int main ( void ) {
    int x = 0;

    cout << "\nEnter the max count : ";
    cin >> x;

    cout << "For loop output ..." << endl;
    for ( int i=1; i <= x; ++i ) {
        cout << i << "\t";
    }
    cout << endl;

    return 0;
}