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

	virtual std::string toString() const; //virtual möjliggör dynamisk bindinng
	//dvs det blir objektet data typ som avgör  vilket av de överlagrade
	//versionerna som kommer att execveras

	virtual float BaseArea() const = 0; // =0 gör att det blir ett rent viruellt funcntion
	//dvs  "tvingar" subclasses att implementera detta, dessutom medför
	//detta att Shape3D blir abstrakt. 
	//det innebär att man inte kan skapa object av typen Shape3D.

	float volume()const ;

private:
	float height;
	

};


#endif // !SHAPE3D_H
