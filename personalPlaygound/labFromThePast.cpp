#include "labFromThePast.h"
#include <iostream>
#include <fstream>
#include <string>
void add(int& x, int y)
{
	x += y;
}

bool readStringsFromFile(string filename, string arr[], int nrOf) {
	bool didRead = false;

	ifstream file;
	file.open(filename);
	if (file.is_open()) { 
		int elementCount;
		file>>elementCount;
		cout<< elementCount;
		file.close();
	}
	return didRead;
}

int getIndex(string all[],int nrOf, string toFind)
{
	
	for (int i = 0; i < nrOf; i++) {
		if (all[i] == toFind) {
			return i;
		}
	}

	return -1;
}

	