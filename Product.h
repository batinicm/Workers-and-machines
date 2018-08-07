#ifndef _PROIZVOD_
#define _PROIZVOD_

#include <iostream>
using namespace std;

class Product {
private:
	static int gId;
	int id = ++gId;
public:
	Product() {};
	Product(const Product& p){}
	Product& operator=(const Product& p) { return *this; }
	virtual ~Product(){}
	virtual char Type() const = 0;
	virtual double V() const = 0;
protected:
	virtual void Write(ostream& it) const {
		it << id << " " << Type();
	}
	friend ostream& operator<<(ostream& it, const Product& p) {
		p.Write(it);
		return it;
	}
};
int Product::gId = 0;
#endif
