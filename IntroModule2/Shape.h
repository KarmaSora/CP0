#ifndef SHAPE_H
#define SHAPE_H


class Shape
{
public:
	enum class Type { Rectangle, Square,Circle};

	Shape();
	~Shape();
	Shape(Type type);

	Shape(const Shape& other); //copy constructor

	void operator=(const Shape& other);

	void draw();
	void addSubShape(Shape* shape);


private:
	
	int id;
	static int idCounter;

	Type type;

	Shape** subShapes;
	int subShapeCapacity;
	int subShapesCount;
	static const int DEFULT_LIST_CAPACITY = 3;


};



#endif // !SHAPE.H


