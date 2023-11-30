#ifndef SHAPE3D_H
#define SHAPE3D_H
#include <string>
class Shape3D
{
public:
	Shape3D();
	Shape3D(float height);
	virtual ~Shape3D();

	float getHeight() const;
	void setHeight(float height);

	virtual std::string toString() const;
	float BaseArea() const;
	float volume()const ;

private:
	float height;
	

};


#endif // !SHAPE3D_H
