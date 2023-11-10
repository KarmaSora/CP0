#ifndef Functions_H
#define Functions_H
#include <string>
using namespace std;

void inputIceCream(string iceCreams[], int nrOfIceCream);
void inputRatings(string iceCreams[], int sumOfRatings[], int nrOfIceCream);
void calculateAndShowResult(string iceCreams[], int sumOfRatings[], int nrOfGradings, int nrOfIceCream);
int getIndexOfBestRating(int sumOfRatings[], int nrOfIceCream);
int getIndexOfWorstRating(int sumOfRatings[], int nrOfIceCream);
//int checkForIceCream(string iceType, string iceCreams[], int nrOfIceCream);
bool checkForIceCream(string iceType, string iceCreams[], int nrOfIceCream);

bool readIceCreamsFromFile(int maxNumberOf,  string* iceCreams, int &nrOfIceCream, const string & fileName = "iceCreams.txt");

#endif