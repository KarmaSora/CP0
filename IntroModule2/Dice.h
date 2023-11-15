#pragma once
#include <random>
#include <ostream>

class Dice {

public:
	Dice();
	~Dice();
	int roll();
	int getValue() const;

private:
	int sides = 6;
	int value = 1;
};

std::ostream& operator <<(std::ostream& stream, const Dice& dice);