#include "Card.h"

Card::Card()
    :value(3), color("red"), type("heart")
{
}

Card::Card(int value, std::string type, std::string color)
    :value(value), color(color), type(type)
{
}

int Card::getValue() const
{
    return this->value;
}

void Card::setValue(int value)
{
    this->value = value;
}

std::string Card::getColor() const
{
    return this->color;
}

void Card::setColor(std::string color)
{
    this->color = color;
}

std::string Card::getType() const
{
    return this->type;
}

void Card::setType(std::string type)
{
    this->type = type;
}

void Card::cardInfo()
{
    std::cout << "card";
}
