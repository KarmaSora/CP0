#ifndef DRIVER_H
#define DRIVER_H
#include <iostream>
class Driver
{
private:
	std::string name;
	std::string number;

public:
	Driver();
	Driver(std::string name, std::string number);
	~Driver();
	void setName(std::string name);
	std::string getName();

	void setNumber(std::string number);
	std::string getNumber();

	void changeDriver(std::string name, std::string number);

};



#endif // !DRIVER_H
