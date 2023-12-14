#include "Shape3DHandler.h"
#include <iostream>
#include <string>

void func(Shape3DHandler shapeHandler)  // i smaband med anrop execveras copy constuctor
{
	//...
}

int main(){
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	Shape3DHandler sHandel;
	sHandel.addBox(2, 2, 3);
	std::string cylOrient = "Vertical";
	sHandel.addCylinder(1,5, cylOrient);

	sHandel.addCylinder(3, 7, cylOrient);

	std::string cylOrientV2 = "Horizontal";

	sHandel.addCylinder(3, 7, cylOrientV2);



	sHandel.showAll();
	std::cout << " nr of Cylenders that are Horizntal is: " << sHandel.nrOfCylindersWithOrientation("Horizontal")<<std::endl;
	std::cout << " nr of Cylenders that are Verticla is: " << sHandel.nrOfCylindersWithOrientation("Vertical")<<std::endl;

	std::cout << "\n\n\n------\n";
	Shape3DHandler bShapeHandler = sHandel; //anrop av kopierings constructor
	bShapeHandler.showAll();
	std::cout << "\n\n\n------\n";

	Shape3DHandler otherShapeHandler;
	otherShapeHandler.addCylinder(1, 5, cylOrient);
	otherShapeHandler.addBox(2, 2, 3);

	sHandel = otherShapeHandler;
	otherShapeHandler.showAll();



return 0;
}