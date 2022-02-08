#include <iostream>
using namespace std;

int main ( ) {

	int *ptrInt = new int(10);
	float *ptrFloat= new float(10.5f);

	cout << "Size of integer is " << sizeof(int) << " bytes."<< endl;
	cout << "Size of float is " << sizeof(float) << " bytes."<< endl;

//	delete ptrInt;

	return 0;
}
