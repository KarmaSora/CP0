#include <iostream>
#include <fstream>
#include <string>

void readFile(std::string fileName) {
	using namespace std;

	ifstream file;
	file.open(fileName);


	if (file.is_open()) {

		string test;
		int lineCount;

		file >> lineCount;
		for (int i = 0; i < lineCount; i++) {
			file >> test;
			cout << test;
		}
	}
	file.close();

}



//	ifstream file;
//	file.open(fileName);
//	if (file.is_open()) {
//
//		string test;
//		while (getline(file, test)) {
//			cout << test << endl;
//		}
//	}
//	file.close();
//
//}


int main() {

	readFile("karma.txt");

}


