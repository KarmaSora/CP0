#include <iostream>
#include "Shape3DHandler.h"
#include <string>
using namespace std;

void func(Shape3DHandler shapeHandler) // i samband med anrop exekeveras kopieringskonstruktorn
{
	//....
}

int main()
{
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	Shape3DHandler shape3DHand;

	shape3DHand.addBox(10.f, 20.f, 30.f);
	shape3DHand.addCylinder(5.4f, 45.f, "Vertical");
	shape3DHand.addCylinder(5.4f, 15.f, "Vertical");
	shape3DHand.addCylinder(5.4f, 45.f, "Horizontal");
	shape3DHand.addBox(20.f, 30.f, 4.f);

	shape3DHand.showAll();

	cout << "nr of cylinders that are Horizontal is " << shape3DHand.nrOfCylindersWithOrientation("Horizontal") << endl;
	cout << "nr of cylinders that are Vertical is " << shape3DHand.nrOfCylindersWithOrientation("Vertical") << endl;

	//Shape3DHandler bShapeHandler = shape3DHand; // anrop av kopieringskonstruktor

	//bShapeHandler.showAll();

	Shape3DHandler otherShape3DHand;
	otherShape3DHand.addCylinder(4.f, 12.f, "Horizontal");
	otherShape3DHand.addBox(11.f, 22.f, 33.f);

	shape3DHand = otherShape3DHand;

	shape3DHand = shape3DHand; // ska inte medföra något arbete i tilldelningsoperatorn

	return 0;
}
