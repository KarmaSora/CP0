#include <iostream>
#include "Shape.h"

Shape::Shape() : type(Type::Rectangle)
{
	std::cout<< "Shape::Shape()" << std::endl;
}

Shape::~Shape()
{
	std::cout << "destructing.." << std::endl;

}

Shape::Shape(Type type) 
	: type(type)
{
	std::cout << "Shape::Shape(Type type) " << std::endl;

}

 Shape::Shape(const Shape& other)
	 :type(other.type)
{
	 std::cout << " Shape::Shape(const Shape& other)" << std::endl;

}

Shape::Shape()
{
	std::cout << " Shape::Shape()" << std::endl;

}

void Shape::operator=(const Shape& other)
{
	std::cout << "Shape :: operator = " << std::endl;
	this->type = other.type;
}

Shape::Shape(const Shape &other)
	: type(other.type)
{
}

void Shape::draw()
{
	//if (this->type == Type::Rectangle) {
	//	std::cout << "Rectangle" << std::endl;

	//}


	switch (this->type)
	{
	case Type::Rectangle :
		std::cout << "Rectangle" << std::endl;
		break;
	case Type::Circle:
		std::cout << "Circle" << std::endl;
		break;
	case Type::Square:
		std::cout << "Suqare" << std::endl;

	default:
		break;
	}

}
