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

//int calcNumUnder500() {
//
//	cout << "enter the size of wanted list..>" << endl;
//	int numberOfElements;
//	cin >> numberOfElements;
//	cout << numberOfElements << endl;
//
//}




int main() {
	/*string a = "this text has 4 spaces!";
	calcSpacesInString(a);*/

	/*string b = "kkeKe aKe 8 kokakk MMeMMMme";
	calcVocalsInStirng(b);*/

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

	

	for (int i = 0; i < 10; ++i) {
		int index1 = rand() % 10;
		int index2 = rand() % 10;
		swap(stringArray[index1], stringArray[index2]);
	}

	// Print the contents of the array
	cout << "Shuffled content of the array: ";
	for (int i = 0; i < 10; ++i) {
		cout << stringArray[i] << " ";
	}
	cout << endl;

	// Deallocate the memory on the heap
	delete[] stringArray;


	//calcNumUnder500();

	return 0;
}