#ifndef SHAPE_3D_HANDLER_H
#define SHAPE_3D_HANDLER_H
#include "Shape3D.h"
#include <string>
class Shape3DHandler
{

public:
	static const int CAP = 15; // const int p� class niv�
		//static g�r att alla classer har tillg�ng till variablen ist�llet f�r att var och skapar sin egen
		//dvs, delas av alla object

private:
	Shape3D* shapes[CAP]{ nullptr };
	int nrOfShapes;
public:
	Shape3DHandler();
	virtual ~Shape3DHandler();
	Shape3DHandler(const Shape3DHandler& other);
	Shape3DHandler& operator =(const Shape3DHandler& other);

	bool addCylinder(float radius, float height, std::string& orientation);
	bool addBox(float width, float length, float height);
	void showAll();
	int nrOfCylindersWithOrientation(const std::string & orientation) const;
};



#endif // !SHAPE_3D_HANDLER_H