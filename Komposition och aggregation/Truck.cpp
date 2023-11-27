#include "Truck.h"
using namespace std;

Truck::Truck()
{
    this->reg=("XXX");
    this->drivenKm = 0;
    this->driver.setName("No DRIVER");
    this->driver.setNumber("no number was set");
}

Truck::Truck(std::string reg)
{
    this->reg = reg;
    this->drivenKm = drivenKm;
    this->driver = driver;
}

Truck::~Truck()
{
    std::cout << "Destroying Truck... ";
}


std::string Truck::getReg()
{
    return this->reg;
}

float Truck::getDrivenKm()
{
    return this->drivenKm;
}

void Truck::setReg(std::string reg)
{
    this->reg = reg;
}

void Truck::setDrivenKm(float drivenKm)
{
    this->drivenKm = drivenKm;
}



Driver Truck::getDriver()
{
    return this->driver;
}

void Truck::incMiles(float drivenKm)
{
    this->drivenKm += drivenKm;
}

void Truck::printer()
{
    cout << "Name: ";
    cout << driver.getName() << endl;

}

void Truck::changeDriver(std::string name, std::string number)
{
    driver.setName(name);
    driver.setNumber(number);
    
}
