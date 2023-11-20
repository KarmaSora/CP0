#include "Shape.h"
#include <iostream>

using namespace std;

int Shape::idCounter = 0; // static variable initialization


Shape::Shape() : type(Type::Rectangle), id(Shape::idCounter++),
	subShapes(nullptr), subShapesCount(0), subShapesCapacity(0)
{
	cout << "Shape::Shape()" << endl;
}

Shape::~Shape()
{
	cout << "Shape::~Shape() [" << this->id << "]" << endl;
	if (this->subShapes)
	{
		for (int i = 0; i < this->subShapesCount; i++)
		{
			delete subShapes[i];
		}
		delete[] subShapes;
	}
}

Shape::Shape(Type type) : Shape()
//	type(type)
{
	this->type = type;
	cout << "Shape::Shape(Type type)" << endl;
}


Shape::Shape(const Shape& other) : type(other.type), id(Shape::idCounter++),
	subShapesCount(other.subShapesCount), subShapesCapacity(other.subShapesCapacity), subShapes(nullptr)
{
	cout << "Shape::Shape(const Shape& other)" << endl;
	if (other.subShapes)
	{
		this->subShapes = new Shape* [other.subShapesCapacity];
		for (int i = 0; i < this->subShapesCount; i++)
		{
			this->subShapes[i] = new Shape(*other.subShapes[i]);
		}
	}
}

void Shape::draw()
{
	switch (this->type)
	{
	case Type::Rectangle:
		cout << "Rectangle[" << this->id << "]" << endl;
		break;
	case Type::Square:
		cout << "Square[" << this->id << "]" << endl;
		break;
	case Type::Circle:
		cout << "Circle[" << this->id << "]" << endl;
		break;
	}
	if (this->subShapesCount > 0)
	{
		cout << "Subshapes-->" << endl;
		for (int i = 0; i < this->subShapesCount; i++)
		{
			subShapes[i]->draw();
		}
		cout << "<--Subshapes:" << endl;
	}
}

void Shape::operator=(const Shape& other)
{
	cout << "Shape::operator=" << endl;
	if (this != &other)
	{
		// Delete existing array and content
		for (int i = 0; i < this->subShapesCount; i++)
		{
			delete this->subShapes[i]; // Delete array content
		}
		delete [] this->subShapes; // Delete array

		// Initiate from other
		this->type = other.type;
		this->subShapesCapacity = other.subShapesCapacity;
		this->subShapesCount = other.subShapesCount;
		//this->id = other.id;

		// Create new array
		this->subShapes = new Shape * [this->subShapesCapacity];

		// Copy from other
		for (int i = 0; i < this->subShapesCount; i++)
		{
			this->subShapes[i] = new Shape(*other.subShapes[i]);
		}
		// Null remaining
		for (int i = this->subShapesCount; i < this->subShapesCapacity; i++)
		{
			this->subShapes[i] = nullptr;
		}
	}

}

void Shape::addSubShape(Shape* shape)
{
	if (this->subShapes == nullptr)
	{
		this->subShapes = new Shape* [DEFAULT_LIST_CAPACITY];
		this->subShapesCapacity = DEFAULT_LIST_CAPACITY;
		this->subShapesCount = 0;
	}
	this->subShapes[this->subShapesCount++] = shape;
}
