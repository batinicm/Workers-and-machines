#ifndef _RAD_
#define _RAD_

#include "SphereMachine.h"
#include "CubeMachine.h"
#include "Errors.h"
#include <string>

class Worker {
private:
	static int gId;
	int id = ++gId;
	string name;
	Machine* mach;
	int num;
public:
	Worker(string i, Machine* m = nullptr) : mach(m), name(i) { num = 0; }
	Worker(const Worker& r) = delete;
	Worker& operator=(const Worker& r) = delete;
	Worker& operator+=(Machine * m) { 
		mach = m; num = 0;
		return  *this;
	}
	int Produced() const {
		if (!mach) throw Err_NoMachine(name, id);
		return num;
	}
	Product* Make() {
		if (!mach) throw Err_NoMachine(name, id);
		num++;
		return mach->make();
	}
	friend ostream& operator<<(ostream& it, const Worker& r) {
		it << r.name << " : " << r.id;
		if (r.mach) {
			it << '('<<r.mach->ProductType() << "," << r.num<<')';
		}
		return it;
	}
};
int Worker::gId = 0;

#endif
