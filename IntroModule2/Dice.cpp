#include "Dice.h"
#include <random>
#include <iostream>

using namespace std;
Dice::Dice()
{
    cout << "Dice constructor" << endl;
}

Dice::~Dice()
{
    cout << "Dice Destructor" << endl;

}

int Dice::roll()
{

    this->value = rand() % 6 +1;
    return  this->value;
}

int Dice::getValue() const
{
    return this->value;
}

std::ostream& operator<<(std::ostream& stream, const Dice& dice)
{
    stream << dice.getValue();
    return stream;
}
