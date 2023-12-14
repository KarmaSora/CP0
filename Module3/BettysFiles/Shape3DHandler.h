#ifndef SHAPE3D_HANDLER_H
#define SHAPE3D_HANDLER_H

#include <string>
#include "../Shape3D.h"
using namespace std;

class Shape3DHandler
{
public:
	static const int CAP = 15; // static innebär att det är klassnivå, dvs delas av alla objekt
private:
	Shape3D* shapes[CAP];
	int nrOfShapes;
public:
	Shape3DHandler();
	Shape3DHandler(const Shape3DHandler& other);
	//void operator=(const Shape3DHandler& other);
	Shape3DHandler& operator=(const Shape3DHandler& other);
	virtual ~Shape3DHandler();
	bool addCylinder(float radius, float height, const string& orientation);
	bool addBox(float width, float length, float height);
	void showAll() const;
	int nrOfCylindersWithOrientation(const string& orientation) const;

};


#endif
