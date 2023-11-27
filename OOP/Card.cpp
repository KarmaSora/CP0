#include "Card.h"
#include <string>

Card::Card()
    :value(3), color("Red"), type("Heart")
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

std::string Card::cardInfo()
{
    //std::cout << "card: "<<getType()<<" "<<getValue() << std::endl;
    return  "card: "+getType()+ " " + std::to_string(getValue()) + "\n";

}
