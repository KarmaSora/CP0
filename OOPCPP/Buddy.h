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
	Buddy(const string &name, int age, float height );//konstructor
	Buddy();//Defult consturctor, aka No arguments cosntructor

	~Buddy();//destruktor


	float getHeight() const; // konstant medlemsfunction, kan inte ändra objectet
	void setHeight(float height);


	void setName(const string &name);
	void setAge(int age);
	string toString() const;
	void growOlder();

	//operator overloading. Operator överlagring
	bool operator ==(const Buddy& leftHand) const;

	bool operator <(const Buddy& leftHand) const;

};


#endif // BUDDY_H
