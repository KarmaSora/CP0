#include <iostream>
#include <fstream>
#include <string>

void readFile(std::string fileName) {
	using namespace std;


	/* */
	//works on singel words, Must know line count!
	ifstream file;
	file.open(fileName);
	if (file.is_open()) {

		string test;
		int lineCount;

		file >> lineCount;
		for (int i = 0; i < lineCount; i++) {
			file >> test;
			cout << test<<endl;
		}
	}
	file.close();
	


	/*
//works on entire lines, not knowing line or word count
	ifstream file;
	file.open(fileName);
	if (file.is_open()) {

		string test;
		while (getline(file, test)) {
			cout << test << endl;
		}
	}
	file.close();

}
*/

}

void writeFile(std::string filename, std::string toWrite) {

	std::ofstream file;
	file.open(filename);
	if (file.is_open()) {

		file<< toWrite;

	file.close();
	}
	
}



int main() {

	//readFile("karma.txt");
	writeFile("testing.txt","karma was here");
}


