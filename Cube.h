#ifndef _KVADAR_
#define _KVADAR_

#include "Product.h"

class Cube : public Product {
private:
	double a;
	void Write(ostream& it) const override {
		Product::Write(it);
		it << '(' << a << ')';
	}
public:
	static const char VR = 'C';
	Cube(double p) {
		a = p;
	}
	char Type() const override { return VR; }
	double V() const override { return a*a*a; }
};

#endif
