#ifndef DERIVED_h
#define DERIVED_h
#include "ADT.h"
using namespace std;

class Derived : public ADT {
public:
	void doSomething(){
		cout << "I did something" << endl;
	}
	
	void doSomethingElse(){
		cout << "I did something else" << endl;
	}
	
	void dontDoThis(){
		cout << "I did not do this" << endl;
	}
	
};

#endif
