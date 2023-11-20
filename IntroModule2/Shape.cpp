#include <iostream>
#include "Shape.h"


int Shape::idCounter = 0; //static variable initialization
Shape::Shape() 
	: type(Type::Rectangle), id(Shape::idCounter++),
	subShapes(nullptr), subShapeCapacity(0), subShapesCount(0)
{
	std::cout<< "Shape::Shape()" << std::endl;
}

Shape::~Shape()
{
	std::cout << "destructing.. [" << this->id<<"]" << std::endl;
	if (this->subShapes) {

		for (int i = 0; i < this->subShapesCount; i++) {
			delete subShapes[i];
		}
		delete[] subShapes;
	}


}

Shape::Shape(Type type)  : Shape()
	//: type(type)
{
	this->type = type;
	std::cout << "Shape::Shape(Type type) " << std::endl;

}

 Shape::Shape(const Shape& other)
	 :type(other.type), id(Shape::idCounter++), 
	 subShapesCount(other.subShapesCount), subShapeCapacity(other.subShapeCapacity), subShapes(nullptr)
{
	 std::cout << " Shape::Shape(const Shape& other)" << std::endl;
	 if (other.subShapes) {
		 this->subShapes = new Shape * [other.subShapeCapacity];
		 for (int i = 0; i < subShapesCount; i++) {
			 this->subShapes[i] = other.subShapes[i];
		 }
	 }

}

Shape::Shape()
{
	std::cout << " Shape::Shape()" << std::endl;

}

void Shape::operator=(const Shape& other)
{
	std::cout << "Shape :: operator = " << std::endl;
	
	if(this != &other){

	this->type = other.type;
	}
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
		std::cout << "Rectangle [" <<this->id <<"]" << std::endl;
		break;
	case Type::Circle:
		std::cout << "Circle" << std::endl;
		break;
	case Type::Square:
		std::cout << "Suqare" << std::endl;
		break;

		if (this->subShapesCount > 0) {
			std::cout << "subShapeCount\n";

			for (int i = 0; this->subShapesCount; i++) {
				subShapes[i]->draw();
			}
			std::cout << "subShapeCount\n";

		}

	}

}

void Shape::addSubShape(Shape* shape)
{
	if(this->subShapes == nullptr) {
		this->subShapes = new Shape * [DEFULT_LIST_CAPACITY];
		this->subShapeCapacity = DEFULT_LIST_CAPACITY;
		this->subShapesCount = 0;
	}
	this->subShapes[this->subShapesCount++] == shape;

}
