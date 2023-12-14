#include "Shape3DHandler.h"
#include "../Box.h"
#include <iostream>
#include "../Cylinder.h"

using namespace std;

Shape3DHandler::Shape3DHandler()
    :nrOfShapes(0)
{
   // this->nrOfShapes = 0;
    for (int i = 0; i < CAP; i++)
    {
        this->shapes[i] = nullptr;
    }
}

Shape3DHandler::Shape3DHandler(const Shape3DHandler& other)
{
    this->nrOfShapes = other.nrOfShapes;
    for (int i = 0; i < this->nrOfShapes; i++)
    {
        // kopiera varje objekt, dvs Cylinder och Box genom att använda kopieringskonstruktorn i dessa klasser
        Cylinder* cylptr = dynamic_cast<Cylinder*>(other.shapes[i]);
        if (cylptr != nullptr)
        {
            this->shapes[i] = new Cylinder(*cylptr);
        }
        else
        {
            Box* boxptr = dynamic_cast<Box*>(other.shapes[i]);
            if (boxptr != nullptr)
            {
                this->shapes[i] = new Box(*boxptr);
            }
        }  
    }
}

Shape3DHandler& Shape3DHandler::operator=(const Shape3DHandler& other)
{
    if (this != &other) // self - check
    {
        // avallokera befintligt minne på heapen
        for (int i = 0; i < this->nrOfShapes; i++)
        {
            delete this->shapes[i];
            this->shapes[i] = nullptr;
        }

        // kopiera inklusive djupkopiering av Box och Cylinder-objekt
        this->nrOfShapes = other.nrOfShapes;
        for (int i = 0; i < this->nrOfShapes; i++)
        {
            // kopiera varje objekt, dvs Cylinder och Box genom att använda kopieringskonstruktorn i dessa klasser
            Cylinder* cylptr = dynamic_cast<Cylinder*>(other.shapes[i]);
            if (cylptr != nullptr)
            {
                this->shapes[i] = new Cylinder(*cylptr);
            }
            else
            {
                Box* boxptr = dynamic_cast<Box*>(other.shapes[i]);
                if (boxptr != nullptr)
                {
                    this->shapes[i] = new Box(*boxptr);
                }
            }
        }
    }
    return *this;
}

Shape3DHandler::~Shape3DHandler()
{
    for (int i = 0; i < this->nrOfShapes; i++)
    {
        delete this->shapes[i];
    }
}

bool Shape3DHandler::addCylinder(float radius, float height, const string& orientation)
{
    bool didAdd = false;
    if (this->nrOfShapes < CAP)
    {
        this->shapes[this->nrOfShapes++] = new Cylinder(radius, height, orientation);
        didAdd = true;
    }
    return didAdd;
}

bool Shape3DHandler::addBox(float width, float length, float height)
{
    bool didAdd = false;
    if (this->nrOfShapes < CAP)
    {
        this->shapes[this->nrOfShapes++] = new Box(length, width, height);
        didAdd = true;
    }
    return didAdd;
}

void Shape3DHandler::showAll() const
{
    for (int i = 0; i < this->nrOfShapes; i++)
    {
        cout << this->shapes[i]->toString() << endl << endl;
    }
}

int Shape3DHandler::nrOfCylindersWithOrientation(const string& orientation) const
{
    Cylinder* cylPtr = nullptr;
    int counter = 0;
    for (int i = 0; i < this->nrOfShapes; i++)
    {
        cylPtr = dynamic_cast<Cylinder*>(this->shapes[i]); // dynamic_cast ger adressen till Cylinder-objektet om det är en
                                                            // pekare till ett sådant objekt och nullptr annars
        if (cylPtr != nullptr)
        {
            if (cylPtr->getOrientaion() == orientation)
            {
                counter++;
            }
        }
    }
    return counter;
}
