#include "Box.h"

Box::Box(float length, float width, float height)
    :length(length), width(width), Shape3D(height)
{
    /*
    
    */
    this->length = length;
    this->width = width;
}


void Box::setWidth(float width)
{
    this->width = width;
}

void Box::setLength(float lenght)
{
    this->length = lenght;
}

float Box::getWidth(float width)
{
    return this->width;
}

float Box::getLength(float length)
{
    return this->length;
}

std::string Box::toString() const
{
    return "Box: \n --lenght: " + std::to_string(this->length)+ "\n --Width: "
        +std::to_string(this->width) + Shape3D::toString(); 
}

float Box::BaseArea() const
{
    return this->width * this->length;
}

float Box::volume() const
{
    return this->BaseArea() * this->getHeight();
}
