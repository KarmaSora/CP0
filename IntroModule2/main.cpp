#include <iostream>
#include "Shape.h"
int main(){

	Shape rect = Shape(Shape::Type::Rectangle);
	rect.draw();

	Shape circ = Shape(Shape::Type::Circle);
	circ.draw();

	Shape square = Shape(Shape::Type::Square);
	square.draw();

	Shape rectCopy = Shape(rect);
	rectCopy.draw();



}
