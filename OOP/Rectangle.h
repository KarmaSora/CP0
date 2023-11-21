
#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
class Rectangle
{
private:
    float width;
    float height;
public:
    Rectangle(); // bredd och höjd blir 0
    Rectangle(float width, float height);
    void setWidth(float width);
    void setHeight(float height);
    float circumference();
};




#endif // !Rectangle


