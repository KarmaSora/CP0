#include "Buddy.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
	
	Buddy buddies[3];
	buddies[0].setName("A");
	buddies[0].setHeight(12.5f);
	buddies[0].setAge(33);

	buddies[1].setName("A");
	buddies[1].setHeight(12.5f);
	buddies[1].setAge(33);

	buddies[2].setName("B");
	buddies[2].setHeight(170.5f);
	buddies[2].setAge(33);



	// if(buddies[0].operator==(buddies[1])) //samma som if satsen nere
	if (buddies[0] == buddies[1]) {
		cout << "equal"<<endl;
	}
	else {
		cout << "not equal" << endl;
	}

	if (buddies[1] == buddies[2]) {
		cout << "equal" << endl;
	}
	else {
		cout << "not equal" << endl;
	}

	if (buddies[0] < buddies[1]) {
		cout << "less than.." << endl;
	}
	else {
		cout << "greater than" << endl;
	}


	return 0;
}