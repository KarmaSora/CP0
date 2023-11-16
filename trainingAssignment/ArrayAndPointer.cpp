#include <iostream>;

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

int calcNumUnder500() {

	cout << "enter the size of wanted list..>" << endl;
	int numberOfElements;


}
int main() {
	/*string a = "this text has 4 spaces!";
	calcSpacesInString(a);*/

	/*string b = "kkeKe aKe 8 kokakk MMeMMMme";
	calcVocalsInStirng(b);*/

	calcNumUnder500();

	return 0;
}