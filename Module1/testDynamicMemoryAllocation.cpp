#include <iostream>

using namespace std;

int main() {
	int nr = 10;
	int numbersList[3] = { 4, 3, 2 };

	//pointer aka pekare, pekar på platesn i minnet där variabler/värde finns
	//nullptr , pekar ingenstans, har värdet 0
	int* ptr = nullptr;

	int cap = 4;
	ptr = new int[cap] {8,6,5,4}; // new gör att man gör saker på "heapen", i det fallet 4 platser, [0,1,2,3]

	for (int i = 0; i < cap; i++) {
		cout << ptr[i] << "  ";
	}
	cout<<endl;
	delete[] ptr;

	return 0;
}