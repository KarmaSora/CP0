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

	virtual std::string toString() const; //virtual m�jligg�r dynamisk bindinng
	//dvs det blir objektet data typ som avg�r  vilket av de �verlagrade
	//versionerna som kommer att execveras

	virtual float BaseArea() const = 0; // =0 g�r att det blir ett rent viruellt funcntion
	//dvs  "tvingar" subclasses att implementera detta, dessutom medf�r
	//detta att Shape3D blir abstrakt. 
	//det inneb�r att man inte kan skapa object av typen Shape3D.

	float volume()const ;

private:
	float height;
	

};


#endif // !SHAPE3D_H
