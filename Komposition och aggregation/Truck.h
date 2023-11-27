#ifndef TRUCK_H
#define TRUCK_H
#include <iostream>
#include "Driver.h"


class Truck
{
private:
	float drivenKm = 12;
	std::string reg;
	Driver driver;
public:
	Truck();
	Truck(std::string reg);
	~Truck();
	std::string getReg();
	float getDrivenKm();
	void setReg(std::string reg);
	void setDrivenKm(float drivenKm);
	Driver getDriver();
	void incMiles(float drivenKm);

	void printer();
	void changeDriver(std::string name, std::string number);


};




#endif // !TRUCK_H
