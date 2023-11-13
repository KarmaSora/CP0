#include <iostream>

using namespace std;

int minToSec(int minute) {
	int seconds = (minute * 60);
	return seconds;
}
float kmToMiles(float km) {
	float  miles = km / 1.609344f;
	return miles;
}

double multiplikation(double x, double y) {
	return x * y;
}

void timePrint(int sHours, int sMin, int sSec, int gHours, int gMin, int gSec) {
	// start to goal, start to end

	int rHours,rMin,rSec;
	rSec = gSec - sSec;
	if (rSec < 0) {
		rSec = 60 + rSec;
		gMin--;
	}
	rMin = gMin - sMin;

	if (rMin < 0) {
		rMin = 60 + rMin;
		gHours--;
	}
	rHours = gHours - sHours;
	cout<< "it took you: hours: " << rHours<<" hours: " << rMin << " min: " << rSec << "sec";



}

void nameLenTest(string fName, string lName) {

	int fNameLen = fName.length();
	int lNameLen = lName.length();
	if (fNameLen < lNameLen)
		cout << "Hello " << fName << " " << lName << "! Your last name contains more letters than your first name";
	else if (fNameLen > lNameLen)
		cout << "Hello " << fName << " " << lName << "! Your first name contains more letters than your last name.";
	else
		cout << "Hello " << fName << " " << lName << "! Your last name contains the same amount of letters as your first name.";




}
int main() {
	nameLenTest("Karam", "Matarkkk");


	/*
	* //uppgift 6
	
	// start
	int sHours = 12;
	int sMin = 40;
	int sSec = 30;

	//goal aka end
	int goalH = 14;
	int goalM = 22;
	int goalS = 12;
	timePrint(sHours, sMin,sSec,goalH,goalM,goalS);
	*/


	/*
	// upp 3
	int x, y;
	cin >> x;
	cin >> y;
	double multi = multiplikation(x,y);
	cout << multi;
	*/

	/*
	//Uppgift 1
	int min = 50;
	int sec = 25;
	int totalTimeInSec = sec + minToSec(min);
	cout << totalTimeInSec;
	*/

	return 0;
}