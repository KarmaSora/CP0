#include "Driver.h"

Driver::Driver()
{
	this->name = "name";
	this->number = "number";

}

Driver::Driver(std::string name, std::string number)
{	
	this->name = name;
	this->number = number;
}

Driver::~Driver()
{
	std::cout << "Driver Getting Destroyed...";
}

void Driver::setName(std::string name)
{
	this->name = name;
}

std::string Driver::getName()
{
	return this->name;
}

void Driver::setNumber(std::string number)
{
	this->number = number;
}

std::string Driver::getNumber()
{
	return this->number;
}

void Driver::changeDriver(std::string name, std::string number)
{
	this->name = name;
	this->number = number;
}
