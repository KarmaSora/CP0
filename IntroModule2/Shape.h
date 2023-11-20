#pragma once

class Shape
{
public:
	enum class Type{Rectangle, Square, Circle};

	Shape();
	~Shape();

	Shape(Type type);

	Shape(const Shape& other); // Copy constructor

	void operator=(const Shape& other);

	void draw();
	void addSubShape(Shape* shape);

private:
	int id;
	static int idCounter;

	Type type;

	Shape** subShapes;

	int subShapesCapacity;
	int subShapesCount;
	static const int DEFAULT_LIST_CAPACITY = 3;


};