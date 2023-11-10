#include "Functions.h"
#include <iostream>
#include <fstream>



void inputIceCream(string iceCreams[], int nrOfIceCream) {
	cout << "input the name of the IceCreams" << nrOfIceCream << "ice Cream\n";
	string icetype;
	for (int i = 0; i < nrOfIceCream; i++) {
		getline(cin, icetype);
		iceCreams[i] = icetype;
		//cout << i;
	}
}

void inputRatings(string iceCreams[], int sumOfRatings[], int nrOfIceCream) {
	cout << "Grade the icecream (1-5) \n";
	int theRate;
	for (int i = 0; i < nrOfIceCream; i++) {
		cout << iceCreams[i] << ": ";
		cin >> theRate;
		sumOfRatings[i] += theRate;

	}
}

void calculateAndShowResult(string iceCreams[], int sumOfRatings[], int nrOfGradings, int nrOfIceCream)
{
	/*
	*OBS: vid beräkning av medelbetyg sker heltals div.
	*Tip: typecasting
	* ex: 9/2 = 4 (vid heltalsartimatik)
	* men 9/2.0 / 4.5
	* nr/ (float) count resulterat i ett flyttal
	*/


	cout << "The number of gradings is " << nrOfGradings << "\nThe average score for each ice cream is:\n";

	for (int i = 0; i < nrOfIceCream; i++) {

		float average = (float)sumOfRatings[i] / nrOfGradings;
		cout << "iceType:" << iceCreams[i] << ":  average: " << average<<endl;
	}


}

int getIndexOfBestRating(int sumOfRatings[], int nrOfIceCream) {
	int indexNum = 0;
	for (int i = 0; i < nrOfIceCream; i++) {
		if (sumOfRatings[i] > sumOfRatings[indexNum]) {
			indexNum = i;
		}

	}
	return indexNum;
}

int getIndexOfWorstRating(int sumOfRatings[], int nrOfIceCream) {
	int indexNum = 0;

	for (int i = 1; i < nrOfIceCream; i++) {
		if (sumOfRatings[i] < sumOfRatings[indexNum]) {
			indexNum = i;
		}
	}
	return indexNum;
}

/*
int checkForIceCream(string iceType, string iceCreams[], int nrOfIceCream) {

	for (int i = 0; i < nrOfIceCream; i++) {
		if (iceCreams[i] == iceType) {

			return i;
		}
	}

	return -1;
}
*/
bool checkForIceCream(string iceType, string iceCreams[], int nrOfIceCream) {
	bool found = false;
	for (int i = 0; (i < nrOfIceCream) && (found == false); i++) {
		if (iceCreams[i] == iceType) {

			found = true;
		}
	}

	return found;
}

bool readIceCreamsFromFile(int maxNumberOf, string* iceCreams, int& nrOfIceCream, const string& fileName)
{
	bool didRead = false;
	ifstream inFile;

	
	inFile.open(fileName);
	if (inFile.is_open()){
		inFile >> nrOfIceCream;
		inFile.ignore();
		for (int i = 1; i < maxNumberOf; i++) {
			getline(inFile, iceCreams[i]);
			cout << nrOfIceCream << endl;

		}
		didRead = true;
		inFile.close();
	}
	return didRead;
}
