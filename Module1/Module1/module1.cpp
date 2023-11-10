#include <iostream>
#include <string>
#include "Functions.h"


using namespace std;



int main() {
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	//IceCream System
	//string iceCreams[CAPACICTY];
	//int sumOfGrades[CAPACICTY]{0};

	string* iceCreams = nullptr;
	int* sumOfGrades = nullptr;
	int maxNrOfIceCream = 0;

	int nrOfIceCream = 0;
	char addGradings = 'Y';
	int nrOfMoreGradings = 0;

	int index = 0; // check later
	string anIceCream;

	cout << "How many ice creams will be judged? ";
	cin >> maxNrOfIceCream;

	cin.ignore();

	iceCreams = new string[maxNrOfIceCream];
	sumOfGrades = new int[maxNrOfIceCream] {0};

	//inputIceCream(iceCreams, nrOfIceCream);
	//ersatt ed att läsa fil
	if (readIceCreamsFromFile(maxNrOfIceCream, iceCreams, nrOfIceCream)) {

	

	while (addGradings == 'y' || addGradings == 'Y') {
	inputRatings(iceCreams, sumOfGrades, nrOfIceCream);
	nrOfMoreGradings += 1;
	cout << "More gradings (Y,N)";

	cin >> addGradings;
	}

	int heighestRatingIndex = getIndexOfBestRating(sumOfGrades, nrOfIceCream);
	int lowestRatingIndex = getIndexOfWorstRating(sumOfGrades, nrOfIceCream);

	string heighestRatingIce = "The ice cream with highest grade is "+iceCreams[heighestRatingIndex];
	string lowestRatingIce = "The ice cream with lowest grade is " + iceCreams[lowestRatingIndex];
	cout << heighestRatingIce<< endl;
	cout << lowestRatingIce<< endl;
	calculateAndShowResult(iceCreams, sumOfGrades, nrOfMoreGradings, nrOfIceCream);

	string favoritIceType;
	getline(cin, favoritIceType);

	}

	delete[] iceCreams;
	delete[] sumOfGrades;

	return 0;
}
