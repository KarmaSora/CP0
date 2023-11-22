#include "ToyCar.h"

ToyCar::ToyCar()
	:model("Ford Mustang"), color("red")

{
}

ToyCar::ToyCar(std::string model, std::string color)
	:model(model),color(color)
{
}

ToyCar::~ToyCar()
{
}



std::string ToyCar::toString()
{
	std::cout << "< "<< this->model << "> with the color <"<< this->color <<">";
	return "< " + this->model + "> with the color <" + this->color + ">";
}

std::string ToyCar::getColor()
{
	return this->color;
}

void ToyCar::setColor(std::string color)
{
	this->color = color;
}

std::string ToyCar::getModel()
{
	return this->model;
}

void ToyCar::setModel(std::string model)
{
	this->model = model;
}
