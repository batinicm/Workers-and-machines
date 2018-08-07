#ifndef _MASINA_
#define _MASINA_

#include "Product.h"

class Machine {
private:
	int br = 0;
	virtual Product* Make() const = 0;
public:
	Machine() = default;
	Machine(const Machine& m) = delete;
	Machine& operator=(const Machine& m) = delete;
	virtual ~Machine(){}
	virtual char ProductType() const = 0;
	int Produced() const { return br; }
	Product* make() {
		br++;
		return Make();
	}
};

#endif
