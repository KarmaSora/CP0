#include "Buddy.h"

Buddy::Buddy(const string& name, int age, float height)
	:name(name), age(age), height(height) // the same as the "this.variable = variable down "
{
	//this->name = name;
	//this->age = age;
	//this->height = height;
}

Buddy::Buddy()
	: name("NoName"), age(0),height(0.0f)
{
	//this->age = 0;
	//this->height = 0.0f;
	//this->name = "NoNameIsSet";
}

Buddy::~Buddy()
{

	cout << "destruction ..." << this->toString()<< endl;
}

float Buddy::getHeight() const
{
	return this->height; // samma som return height
}

void Buddy::setHeight(float height)
{
	if (height > 0)
		this->height = height;
}

void Buddy::setName(const string& name)
{
	this->name = name;
}

void Buddy::setAge(int& age)
{
	this->age = age;
}

string Buddy::toString() const
{

	return this->name + ", " + to_string(this->age) + "y/o  and " + to_string(this->height) + "cm";
}

void Buddy::growOlder()
{
	this->age ++;
}
