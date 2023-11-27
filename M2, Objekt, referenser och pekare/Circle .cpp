#include "Circle .h"
#include <iostream>
Circle::Circle()
{
    this->radius = 1;
}
Circle::Circle(float radius)
{
    this->radius = radius;
}



float Circle::getRadius()
{
    return this->radius;
}

void Circle::setRadius(float radius)
{
    this->radius = radius;
}

float Circle::calculateCircumferens()
{
    return 2*this->radius * PI;
}

float Circle::calculateArea()
{
    return this->radius*this->radius * PI;
}

bool Circle::operator==(const Circle& circ)
{
    bool isEqual = false;

    if (this->getRadius() == circ.radius) {
       isEqual = true;
    }
    return isEqual;
}

bool Circle::operator!=(const Circle& circ)
{
    bool isEqual = false;

    if (this->getRadius() != circ.radius) {
        isEqual = true;
    }
    return isEqual;
}
