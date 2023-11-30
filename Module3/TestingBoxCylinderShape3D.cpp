#include <iostream>
#include <string>
#include "Box.h"
#include "Cylinder.h"

using namespace std;

int main() {

	//Shape3D shape(6.6f);
	//Box box(1.f, 2.f, 3.f);
	//Cylinder cyl(20.4f, 13.f, "Horizontal");

	//cout << shape.toString() << endl;
	//box.setHeight(10.f);
	//cout << box.toString() << endl;

	//cyl.setRadius(8.0f);
	//cout << cyl.toString() << endl;

	Shape3D* shapePtr = new Shape3D(2.2f);
	Box* boxPtr = new Box(1.f, 2.f, 3.f);
	Cylinder* cylPtr = new Cylinder(19.3f, 45.f, "Vertical");

	Shape3D* shapePtr2 = cylPtr; //Basklassenspekare  tilldelas subklassen pekare
	std::cout << shapePtr2->toString(); //här shape3d toString executas, kallas statisk eller tidig binding,
	//sker vid compile 

	std::cout << shapePtr->toString() << std::endl;
	std::cout << boxPtr->toString() << std::endl;
	std::cout << cylPtr->toString() << std::endl;

	shapePtr2 = boxPtr; // ok
	//boxPtr = shapePtr; //inte ok

	//typecast / typomvandla

	//boxPtr = shapePtr; //Ok om vi VET datatypens ursprung, att shape pekar på box
	boxPtr = static_cast<Box*>(shapePtr2);

	delete shapePtr;
	shapePtr = nullptr;
	delete boxPtr;
	boxPtr = nullptr;
	delete cylPtr;
	cylPtr = nullptr;

	return 0;
}