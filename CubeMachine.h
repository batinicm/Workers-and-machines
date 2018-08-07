#ifndef _MKVAD_
#define _MKVAD_

#include "Machine.h"
#include "Cube.h"

class CubeMachine : public Machine {
private:
	double a;
	Cube* Make() const override {
		return new Cube(a);
	}
public:
	CubeMachine(double p) { a = p; }
	char ProductType() const override { return Cube::VR; }
	double EdgeSize() const { return a; }
};


#endif
