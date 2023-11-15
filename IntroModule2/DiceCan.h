#pragma once
#include "Dice.h"


class DiceCan
{
public:
	DiceCan();
	void rollDice();
	void showStats();
private:
	int min, max, sum;
	Dice dice[5];

};

