#ifndef LA7_A_h
#define LA7_A_h

#include <iostream>

using namespace std;

class A {
    int i;
    int f;
public:
    A(){
        cout << "Creating object" << endl;
        //doSomething();// this calls the the base class doSomething.
    }
    
    void start(){
        i = 1;
        f = 1;
	doSomething(); //this calls the derived. since its called in the cpp file
    }
    
    virtual void doSomething(){
        cout << "A::doSomething()" << endl;
    }
};

#endif
