#include <iostream>
using namespace std;

int main ( int argc, char **argv ) {

    cout << "\nNumber of arguments :" << argc << endl;

    if ( argc == 3 ) {
        cout << "\nApplication name :" << argv[0] << endl;
        cout << "\nSecond argument  :" << argv[1] << endl;
        cout << "\nThird argument   :" << argv[2] << endl;
    }
    else {
        cerr << "\nError Atleast 3 arguments must be supplied" << endl;
        cout << "\nUsage:" << endl;
        cout << "\ta.exe first-argument second-argument" << endl;
    }

    return 0;
}