#ifndef SHAPE_H
#define SHAPE_H


class Shape
{
public:
	enum class Type { Rectangle, Square,Circle};

	Shape();
	~Shape();
	Shape(Type type);

	Shape(const Shape& other);

	void operator=(const Shape& other);

	void draw();


private:
	
	Type type;


};



#endif // !SHAPE.H


