#include "Worker.h"
#include "Cube.h"
#include "Sphere.h"
#include "CubeMachine.h"
#include "SphereMachine.h"
#include <iostream>
using namespace std;

int main() {
	try {
		Worker pera("Peter"), mika("Milos"), laza("Lazar");
		CubeMachine* m1 = new CubeMachine(3);
		pera += m1;
		mika += m1;
		cout << pera<<endl;
		cout << mika << endl;
		pera.Make();
		laza.Make();
	}
	catch (Err_NoMachine g) { cout << g; }
}