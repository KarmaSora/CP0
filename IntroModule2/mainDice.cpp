#include <iostream>
#include "Dice.h"
#include <time.h>
#include "DiceCan.h"


using namespace std;
int main() {

	srand((unsigned int )time(0));		//olika sätt att casta
	//srand(static_cast<unsigned int>(time(0)));

	Dice d1;
	cout << "d1 value = " << d1.getValue() << endl;
	d1.roll();
	cout << "d1 value = " << d1.getValue() << endl;

	cout << "...d1 value = " << d1 << endl;
	//operator<< (std::cout, d1)<<" Hej!"<<endl;

	Dice d2;
	Dice d3;
	Dice dices[5];

	DiceCan diceCan;
	diceCan.rollDice();
	diceCan.showStats();

}