#ifndef _SFERA_
#define _SFERA_

#include "Product.h"

class Sphere : public Product {
private:
	double r;
	void Write(ostream& it) const override {
		Product::Write(it);
		it << '(' << r << ')';
	}
public:
	static const char VR = 'S';
	Sphere(double p) { r = p; }
	char Type() const override { return VR; }
	double V() const override { return 4.*r*r*r*3.1415 / 3; }
};

#endif
