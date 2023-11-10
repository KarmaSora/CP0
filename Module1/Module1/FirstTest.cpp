#include <iostream>
#include <string>
using namespace std;

int main(){

	//single comment
	/*
	this is a block comment
	
	datatyper och varaibler
	int, char, bool, float ==> primitiva datatyper
	string ==> ej primitiv, klassdatatyp
	*/
	int nr = 10;
	char sign = '?';
	int numbers[3]{ 0,3,4 };
	string name;
	float weight = 20.6f; 
	//std::cout << "Hello";		// då using namespace std; finns med
	cout << "HEllo";

	cout << "Input a number: ";
	cin >> nr;
	cin.ignore();
	cout << "Input a String: ";
	//cin >> name; // cin läser bara tills den hittar ny blank space " "
	getline(cin, name);
	cout << "Your name is " << name << endl;

	if (nr == 56) {

	}
	while(nr != 56){
	}

	for (int i = 0; i < 56; i++) {
	
	}

	for (int i = 0; i < 56;) {
		cout << "number is: " << i;
		i++;
	}
	return 0;
}