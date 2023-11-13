#include <iostream>;
#include <random>;

using namespace std;
void print20ToTen() {
	for (int i = 20; i >= 10; i--) {
		cout << i << "\n";
	}

}

void printeven33To99() {
	for (int i = 33; i <= 99; i++) {
		if (i % 3 == 0 && i % 2 == 0)
			cout << i << "\n";
	}
}
int  main() {
	//print20ToTen();
	//printeven33To99();

	cout << rand() ;
	return 0;
}