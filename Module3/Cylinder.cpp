#include "Cylinder.h"
#include <string>
Cylinder::Cylinder(float radius, float height, std::string orientaion)
    :Shape3D(height)
{
    this->radius = radius;

    if (this->orientaion == "Horizontal" || this->orientaion == "Vertical"){
        this->orientaion = orientaion;
        }
    else {
        this->orientaion = "Vertical";
    }
}


void Cylinder::setRadius(float radius)
{
    this->radius = radius;
}

float Cylinder::getRadius() const
{
    return this->radius;
}

void Cylinder::setOrientation(std::string orientaion)
{
    if(this->orientaion == "Horizontal" || this->orientaion== "Vertical"
        || this->orientaion == "horizontal" || this->orientaion == "vertical"){
        this->orientaion = orientaion;
    }
   
}

std::string Cylinder::getOrientaion() const
{
    return this->orientaion;
}

std::string Cylinder::toString() const
{
    
    return "Cylinder\n radius: " + std::to_string(this->radius) + "\n orientation: "
        + this->orientaion + "\n" + Shape3D::toString();
}

float Cylinder::BaseArea() const
{
    return this->radius*this->radius*3.14;
}

float Cylinder::volume() const
{
    return this->BaseArea()* this->getHeight();
}
