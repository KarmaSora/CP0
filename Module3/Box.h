#ifndef BOX_H
#define BOX_H
#include "Shape3D.h"
#include <string>
class Box : public Shape3D
{
public:
	Box(float length =  0.0f, float width =0.0f, float height=0.0f);

	void setWidth(float width);
	void setLength(float length);
	float getWidth(float width);
	float getLength(float length);

	std::string toString() const;


private:
	float width;
	float length;


	// Inherited via Shape3D
	float BaseArea() const override;

};



#endif // !BOX_H
