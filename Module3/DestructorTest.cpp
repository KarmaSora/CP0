#include "Box.h"
#include "Cylinder.h"

int main() {
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);

	Shape3D* shapePtr = new Cylinder(2.4f, 12.4f, "Horizontal");

	delete shapePtr;
	return 0;
}