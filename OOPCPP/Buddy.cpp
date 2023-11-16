#include "Buddy.h"

Buddy::Buddy(string name, int age, float height)
{
	this->name = name;
	this->age = age;
	this->height = height;
}

Buddy::Buddy()
{
	this->age = 0;
	this->height = 0.0f;
	this->name = "NoNameIsSet";
}

//Buddy::~Buddy()
//{
//}

float Buddy::getHeight()
{
	return this->height; // samma som return height
}

void Buddy::setHeight(float height)
{
	if (height > 0)
		this->height = height;
}

string Buddy::toString()
{

	return this->name + ", " + to_string(this->age) + "y/o  and " + to_string(this->height) + "cm";
}

void Buddy::growOlder()
{
	this->age ++;
}
