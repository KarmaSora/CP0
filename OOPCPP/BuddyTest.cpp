// BuddyTest.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "Buddy.h"



/*

Klass och object

klass,medlemsvariabler och medlemsfunctioner
inkapsling och information hiding
konstructur och destructor
klassdiagram
Operatoröverlagring
kostanta medlemsfunctioner

*/


int main()
{
    Buddy buddyOne("Lisa", 25, 173.5f);
    Buddy buddyTwo("Bart", 33, 186.5f);
    Buddy aBuddy; // här anropas defult constructor, aka No Argument Constructor

    buddyOne.setHeight(150);

    cout<< buddyOne.toString()<<endl<<endl;
    cout << buddyTwo.toString() << endl << endl;
    cout << aBuddy.toString() << endl << endl;


    
    return 0;
}

