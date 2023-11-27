#include "labFromThePast.h"
#include <iostream>
#include <string>
using namespace std;
int main() {
	/*
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
	cout << "Value of *pY= &y " << *pY << endl;*/

	int x = 5;
	int y = 10;
	cout <<"preedit:" << x << endl;
	cout <<"preEdit" << y << endl;
	add(x, y);
	cout << "Pon Edit:" << x << endl;
	cout << "Pon Edit:" << y << endl;


	string arrTest[11] = { "Hello" ,"my", "name" ,"is","Demon", "Lord", "Karma","kneel","to", "your","king"};

	int arraySize = sizeof(arrTest) / sizeof(arrTest[0]);
	cout << arraySize;
	for (int i = 0; i < arrTest->size(); i++) {

		cout << arrTest[i]<<endl;
	}

	string anArray[10]{};
	readStringsFromFile("oneWord.txt", anArray, 2);

	return 0;
}