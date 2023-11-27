#ifndef CIRCLE_H
#define CIRCLE_H
#define  PI  3.14;
const int pi = 3.14;
class Circle
{
public:
	Circle();
	Circle(float radius);

	float getRadius();
	void setRadius(float radius);
	float calculateCircumferens();
	float calculateArea();

	bool operator==(const Circle& circ);
	bool operator!=(const Circle& circ);


private:
	float radius;
};


#endif // !CIRCLE_H
