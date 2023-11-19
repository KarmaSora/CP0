#include <iostream>;
#include <string>

using namespace std;

int calcSpacesInString(string& text) {
	int count = 0;
	for (int i = 0; i < text.length(); i++) {
		if (text[i] == ' ') {
			count++;
		}
	}
	cout << "the spaceCOunt is...: " << count;
	return count;
}

int calcVocalsInStirng(string& text) {
	int count = 0;
	string allVocals = "AaEeIiOoUu";
	for (int i = 0; i < text.length(); i++) {
		for (int k = 0; k < allVocals.length(); k++) {
			if (text[i] == allVocals[k]) {
				count++;
			}
		}
	}
	cout << "there are ...: " << count << " Vocals in this text";
	return count;
}


void zeroTenShuffle() {

	srand(time(NULL));
	string* stringArray = new string[10];
	stringArray[0] = "Zero";
	stringArray[1] = "One";
	stringArray[2] = "Two";
	stringArray[3] = "Three";
	stringArray[4] = "Four";
	stringArray[5] = "Five";
	stringArray[6] = "Sex";
	stringArray[7] = "Seven";
	stringArray[8] = "Eight";
	stringArray[9] = "Nine";

	cout << "\nOriginal content of the array: \n";
	for (int i = 0; i < 10; ++i) {
		cout << stringArray[i] << " ";
	}

	for (int i = 0; i < 10; ++i) {
		int index1 = rand() % 10;
		int index2 = rand() % 10;
		swap(stringArray[index1], stringArray[index2]);
	}

	// Print the contents of the array
	cout << "\nShuffled content of the array: \n";
	for (int i = 0; i < 10; ++i) {
		cout << stringArray[i] << " ";
	}
	cout << endl;

	// Deallocate the memory on the heap
	delete[] stringArray;

}

void calcNumUnder500() {
	srand(time(NULL));

	cout << "enter the size of wanted list..>" << endl;
	int numberOfElements;
	cin >> numberOfElements;
	//to check variable data type...
	//cout <<"the number you entered was.." << typeid(numberOfElements).name() << endl; 
	cout << "the number you entered was.." << numberOfElements << endl;

	int* arrInt = new int[numberOfElements];
	int  underLimit = 0;
	for (int i = 0; i < numberOfElements; i++) {
		arrInt[i] = rand() % 1000 ;
		if (arrInt[i] < 500)
			underLimit++;

	}

	for (int i = 0; i < numberOfElements; i++) {
		cout << arrInt[i] << endl;
	}
	cout << "there are :" << underLimit<<" elements under 500" << endl;

	delete[] arrInt;

}

void personIDFun(string *&personID, int *&birthDArr, int numberOfElements) {

	birthDArr = new int[numberOfElements];
	personID = new string[numberOfElements];

	for (int i = 0; i < numberOfElements; i++) {

		string name;
		cout << "enter a name..\n";
		cin.ignore();
		getline(cin, name);

		int age;
		cout << "enter the age ..\n";
		cin >> age;

		birthDArr[i] = age;
		personID[i] = name;
	}

	for (int k = 0; k < numberOfElements; k++) {
		cout << "the name is.. " << personID[k] << endl;
		cout << "the age is " << birthDArr[k] << endl;
	}  
	
}


int main() {
	/*string a = "this text has 4 spaces!";
	calcSpacesInString(a);*/

	/*string b = "kkeKe aKe 8 kokakk MMeMMMme";
	calcVocalsInStirng(b);*/

	/*
	zeroTenShuffle();
	*/


	/*
	calcNumUnder500();
	*/


	
	cout << "enter the size of wanted list..>" << endl;
	int numberOfElements;
	cin >> numberOfElements;
	//to check variable data type...
	//cout <<"the number you entered was.." << typeid(numberOfElements).name() << endl; 
	cout << "the number you entered was.." << numberOfElements << endl;
	int* birthDArr = nullptr;
	string* personID = nullptr;

	personIDFun(personID, birthDArr, numberOfElements);
	cout << birthDArr << endl;
		cout << personID << endl;

	delete[] birthDArr;
	delete[] personID;


	return 0;
}