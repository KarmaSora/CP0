#include <iostream>

using namespace std;

void numSwapper(int *x, int * y) {

	int temp = *x;
	*x = *y;
	*y = temp;


}



int main() {

	//Gör en funktion som låter användaren mata in två ord och returnerar en ny sträng 
	//innehållande båda orden med en blank mellan orden.

	int x = 5;
	int y = 8;
	numSwapper(&x,&y);
	cout << "this is X: " << x << endl;
	cout << "this is y: " << y << endl;



	return 0;
}