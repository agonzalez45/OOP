#ifndef LA5_Animal_h
#define LA5_Animal_h

#include <iostream>
using namespace std;

class Animal {
    string name;
    int age;
    
public:
    
    Animal(){
        name = "Generic Name";
        age = 0;
    }
    
    Animal(string n, int a){
        name = n;
        age = a;
    }
    //A virtual member is a member function that can be redefined in a derived class, while preserving its calling properties through references.
    virtual void talk(){

    }
    
};

#endif
