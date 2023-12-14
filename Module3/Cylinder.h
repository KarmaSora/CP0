#ifndef CYLINDER_H
#define CYLINDER_H

#include "Shape3D.h"
#include <string>

using namespace std;


class Cylinder : public Shape3D
{
public:
	Cylinder(float radius, float height, std::string orientaion= "Vertical");
	void setRadius(float radius);
	float getRadius() const;
	void setOrientation(std::string orientaion);
	std::string getOrientaion() const;
	std::string toString() const; //överskuggar basklassen 


private:
	float radius;
	std::string orientaion;

	// Inherited via Shape3D
	float BaseArea() const override;
};


#endif // !CYLINDER_H
