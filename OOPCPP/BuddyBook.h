#ifndef BUDDYBOOK_H
#define BUDDYBOOK_H
#include "Buddy.h"

using namespace std;

class BuddyBook {
private:
	//implementera relationen Buddybook har 0 till "obegränsat" antal buddies

	Buddy* *buddies;	//compisition
	int capacity;
	int currentNrOfBuddies; 

public:

	BuddyBook(int capacity = 3);
	BuddyBook(BuddyBook& other);

	void operator =(const BuddyBook& other);

	void addBuddy(const string &name, int age, float height);  //kan ta bort referens och const
	~BuddyBook();
	void ShowAllBuddies() const;
	bool removeBuddy(const string& name, int age, float height);
};

#endif // !BUDDYBOOK_H
