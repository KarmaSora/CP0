#include <iostream>
#include "DiceCan.h"

DiceCan::DiceCan()
{
}

void DiceCan::rollDice()
{
		sum = 0;
		min = 1000;
		max = 0;
	for (Dice dice : this->dice) {
		dice.roll();
		sum += dice.getValue();
		min = dice.getValue() < min ? dice.getValue() : min;
		max = dice.getValue() > min ? dice.getValue() : max;

	}
}

void DiceCan::showStats()
{
		std::cout<< "Totalsum = " << sum << "Min = " << min << "Max= " << max << std::endl;
	
}
