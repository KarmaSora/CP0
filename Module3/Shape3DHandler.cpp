#include "Shape3DHandler.h"
#include "Box.h"
#include "Cylinder.h"
#include <iostream>
Shape3DHandler::Shape3DHandler()
    : nrOfShapes(0)
{
    //this->nrOfShapes = 0;

    for (int i = 0; i < CAP; i++) {
        this->shapes[i] = nullptr;
    }
}

Shape3DHandler::~Shape3DHandler()

{

    for (int i = 0; i < this->nrOfShapes; i++) {
        delete this->shapes[i];
    }
}

Shape3DHandler::Shape3DHandler(const Shape3DHandler& other)
{
}

Shape3DHandler& Shape3DHandler::operator=(const Shape3DHandler& other)
{
      if(this != &other){
      this->nrOfShapes = other.nrOfShapes;
      for (int i = 0; i < this->nrOfShapes; i++) {
          //kopierar varje object, dvs Cylinder och box, genom att använda kopieringkonstruktor i dessa klasser

          Cylinder* cylPtr = dynamic_cast<Cylinder*>(other.shapes[i]);
          if (cylPtr != nullptr) {
              this->shapes[i] = new Cylinder(*cylPtr);
          }

          else {
              Box* boxPtr = dynamic_cast<Box*> (other.shapes[i]);
              if (boxPtr  != nullptr) {
                  this->shapes[i] = new Box(*boxPtr);
              }


              }
          }
      }
  
      return *this;
}

bool Shape3DHandler::addCylinder(float radius, float height, std::string& orientation)
{
    bool addedStatus = false;
    if(this->nrOfShapes < CAP){
        shapes[this->nrOfShapes++] = new Cylinder(radius,height,orientation);
        addedStatus = true;
    }
    return addedStatus;
}

bool Shape3DHandler::addBox(float width, float length, float height)
{
    bool addedStatus = false;
    if (this->nrOfShapes < CAP) {
        shapes[this->nrOfShapes++] = new Box(length, width, height);
        addedStatus = true;
    }
    return addedStatus;
}

void Shape3DHandler::showAll()
{
    for (int i = 0; i < this->nrOfShapes; i++) {
        std::cout << this->shapes[i]->toString() << std::endl << std::endl;
    }
}

int Shape3DHandler::nrOfCylindersWithOrientation(const std::string& orientation) const
{
    Cylinder* cylPtr = nullptr;
    int currentCount=0;
    for (int i = 0; i < this->nrOfShapes; i++) {
        cylPtr = dynamic_cast<Cylinder*>(this->shapes[i]); //dynamic cast ger adressen till Cylinder -objectet
        //om den är en pekare till ett sådant objekt annars ger den tillbaka nullptr 
        if (cylPtr != nullptr){
            if(cylPtr->getOrientaion() == orientation){

                currentCount++;
            }
        }
       
    }
    return currentCount;
}
