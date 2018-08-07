#ifndef _MSF_
#define _MSF_

#include "Machine.h"
#include "Sphere.h"

class SphereMachine : public Machine {
private:
	double r;
	Sphere* Make() const override {
		return new Sphere(r);
	}
public:
	SphereMachine(double p) { r = p; }
	char ProductType() const override { return Sphere::VR; }
	double Radius() const { return r; }
};

#endif
