#include <iostream>

using namespace std;

int main() {
	int nr = 10;
	int numbersList[3] = { 4, 3, 2 };

	//pointer aka pekare, pekar p� platesn i minnet d�r variabler/v�rde finns
	//nullptr , pekar ingenstans, har v�rdet 0
	int* ptr = nullptr;

	int cap = 4;
	ptr = new int[cap] {8,6,5,4}; // new g�r att man g�r saker p� "heapen", i det fallet 4 platser, [0,1,2,3]

	for (int i = 0; i < cap; i++) {
		cout << ptr[i] << "  ";
	}
	cout<<endl;
	delete[] ptr;

	return 0;
}