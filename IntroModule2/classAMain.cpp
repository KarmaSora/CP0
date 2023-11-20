#include "ClassA.h"
#include <iostream>

//teori 1, main for ClassA
int main()
{
    std::cout << "Hello World!\n";
    ClassA a1;
    a1.setName("kalle");
    cout<< a1.getName()<< endl;

    ClassA* a2 = new ClassA;
    a2->setName("Pelle");
    cout << a2->getName();

    delete a2; //reme,ber to delete the allocated memmory.
    //always delete things you use "new" on 
}