#ifndef BUDDY_H
#define BUDDY_H
#include <iostream>
#include <string>

using namespace std;

class Buddy
{

private:
	string name;
	int age;
	float height; 

public:
	Buddy(string name, int age, float height );//konstructor
	Buddy();//Defult consturctor, aka No arguments cosntructor
	//~Buddy();//destruktor


	float getHeight();
	void setHeight(float height);

	string toString();
	void growOlder();


};


#endif // BUDDY_H
