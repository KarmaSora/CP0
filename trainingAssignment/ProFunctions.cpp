#include "ProFunctions.h"
#include <iostream>
#include <fstream>

using namespace std;

int wordSorter(std::string originalFilePath, std::string shortWordsFilePath, std::string longWordsFilePath, int splitFromLine)
{

	ofstream writeFile, writeFile2;
	writeFile.open(shortWordsFilePath);
	//ofstream writeFile2;
	writeFile2.open(longWordsFilePath);
	if (writeFile.is_open() && writeFile2.is_open()){
	

		ifstream file;
		file.open(originalFilePath);
		if (file.is_open() ) {
			string singleLine;
			file>> singleLine;
			int elementCount = stoi(singleLine);
			for (int i = 0; i < elementCount; i++) {

				getline(file, singleLine);
				if (singleLine.size() >= splitFromLine) {
					writeFile2<<singleLine<<endl;
				}
				else{
					writeFile<< singleLine << endl;
				}
				cout << singleLine << endl;
			}
			file.close();
		}

		writeFile2.close();
		writeFile.close();
	}

	
	return 0;
}

void partition(const std::string original[], int originalSize, std::string shortWords[], std::string longWords[], int splitFromLength)
{
}

void getWordPartitionSize(const std::string original[], int nrOfWords, int splitFromLength, int& numberOfShortWords, int& numberOfLongWords)
{
}

void sort(std::string words[], int size)
{
}
