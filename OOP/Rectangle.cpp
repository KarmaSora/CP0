#include "Rectangle.h"

Rectangle::Rectangle()
:width(3),height(3)
{
}

Rectangle::Rectangle(float width, float height)
	:width(width), height(height)
{
}

void Rectangle::setWidth(float width)
{
	this->width = width;
}

void Rectangle::setHeight(float height)
{
	this->height = height;
}

float Rectangle::circumference()
{
	return 2*(width+height);
}
