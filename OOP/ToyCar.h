#ifndef TOYCAR_H
#define TOYCAR_H

#include <iostream>
class ToyCar
{
public:
	ToyCar();
	ToyCar(std::string model,std::string color);
	~ToyCar();
	std::string toString();
	std::string getColor();
	void setColor(std::string color);
	std::string getModel ();
	void setModel(std::string model);

private:

	std::string color;
	std::string model;
};


#endif // !TOYCAR_H
