#include "Truck.h"
using namespace std;

int main() {

	Truck t1;
	Driver d1("Danne", "13251");

	t1.changeDriver("klalle", "ased");

	/*cout << t1.getDrivenKm() << endl;

	t1.incMiles(12);

	cout << t1.getDrivenKm() << endl;*/

	t1.printer();


	return 0;
}