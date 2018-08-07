#ifndef _GRESKE_
#define _GRESKE_

#include <iostream>
#include <string>
using namespace std;

class Err_NoMachine {
private:
	string worker;
	int id;
public:
	Err_NoMachine(string i, int ii): worker(i), id(ii){}
	friend ostream& operator<<(ostream& it, const Err_NoMachine & g) {
		it << "***Worker: " << g.worker << " : " << g.id << " has no assigned machine!***\n";
		return it;
	}
};

#endif
