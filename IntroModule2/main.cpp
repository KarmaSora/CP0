#include <iostream>
#include "Shape.h"

int main()
{
	// https://learn.microsoft.com/en-us/cpp/c-runtime-library/find-memory-leaks-using-the-crt-library?view=msvc-170
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);


	Shape rect = Shape(Shape::Type::Rectangle);
	rect.draw();
	Shape square = Shape(Shape::Type::Square);
	square.draw();
	Shape circle = Shape(Shape::Type::Circle);
	circle.draw();
	
	Shape rectCopy = Shape(rect);
	rectCopy.draw();

	Shape rect3;
	rect3 = rectCopy;

	Shape rect4 = Shape(Shape::Type::Rectangle);
	Shape* circle2 = new Shape(Shape::Type::Circle);
	rect4.addSubShape(circle2);
	rect4.draw();
	
	Shape rect5 = Shape(Shape::Type::Rectangle);
	Shape* rect6 = new Shape(Shape::Type::Rectangle);
	rect5.addSubShape(rect6);

	Shape rect7 = Shape(Shape::Type::Rectangle);
	rect7.draw();

	rect7 = rect5;
	rect7.draw();


}