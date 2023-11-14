#include <iostream>
#include <string>
using namespace std;


int main() {
	
	int x = 5;
	int y = 33;
	cout<<"Value of X= " << x << endl;
	cout << "Value of y= " << x << endl;

	cout << "Value of &x" << & x << endl;

	int* pX = nullptr;
	cout <<"Value of pX = nullptr: " << pX << endl;
	pX = &x;
	cout << "Value of px = &x: " << pX << endl;

	cout << "Value of *pX " << *pX << endl;

	int* pY = &y;
	cout << "Value of *pY= &y " << *pY << endl;

	int z = 90;
	cout << "Value of z: " << z << endl;

	int* ptrZ = &z;
	cout << "Value of z&: " << &z << endl;
	cout << "Value of ptrZ: " << ptrZ << endl;
	cout << "Value of ptrZ*: " << *ptrZ  << endl;


	return 0;
}