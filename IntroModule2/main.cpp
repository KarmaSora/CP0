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

	Shape rect3;
	rect3 = rectCopy;

	Shape rect4 = Shape(Shape::Type::Rectangle);
	Shape circ2 = Shape(Shape::Type::Circle);

	rect4.addSubShape(&circ2);
	rect4.draw();


	Shape *rect5 = new Shape(Shape::Type::Rectangle);
	Shape *rect6 = new Shape(Shape::Type::Rectangle);
	rect5->addSubShape(rect6);
	Shape *rect7 = new Shape(Shape::Type::Rectangle);
	rect7 = rect5;
	rect7->draw();


}
