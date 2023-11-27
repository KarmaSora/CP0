#include "Circle .h"
#include <iostream>

int main() {
	
	Circle* circ1;
	Circle* circ2;
	Circle* circ3;


	circ1 = new Circle(10);
	circ2 = new Circle(10);
	circ3 = new Circle(25.5);

	if (*circ1 == *circ2) {
		std::cout << "they are equal";
	}
	else {
		std::cout << "they are NOT equal";
	}

	delete circ1;
	circ1, circ2, circ3 = nullptr;

	delete circ2;
	delete circ3;

	return 0;
}