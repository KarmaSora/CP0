#include "Shape3D.h"

Shape3D::Shape3D()
	:height(1)
{
	
}

Shape3D::Shape3D(float height)
{
	this->height = height;
}

Shape3D::~Shape3D()
{
}

float Shape3D::getHeight() const
{
	return this->height;
}

void Shape3D::setHeight(float height)
{
	this->height = height;
}

std::string Shape3D::toString() const
{
	return "Height: " + std::to_string(this->height);
}

float Shape3D::BaseArea() const
{
	return 0.0f;

}

float Shape3D::volume() const
{
	return this->BaseArea() * this->getHeight();

}


