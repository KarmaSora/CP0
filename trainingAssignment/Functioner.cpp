#include <iostream>

using namespace std;

void numSwapper(int *x, int * y) {

	int temp = *x;
	*x = *y;
	*y = temp;


}



int main() {

	//G�r en funktion som l�ter anv�ndaren mata in tv� ord och returnerar en ny str�ng 
	//inneh�llande b�da orden med en blank mellan orden.

	int x = 5;
	int y = 8;
	numSwapper(&x,&y);
	cout << "this is X: " << x << endl;
	cout << "this is y: " << y << endl;



	return 0;
}