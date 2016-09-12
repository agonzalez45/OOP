#ifndef DOG_H
#define DOG_H
#include <iostream>
#include <string>
#include <vector>
#include "Animal.h"
using namespace std;


class Dog : public Animal {
        public:

	void feed(){
        cout << "A bone, please!" << endl;
    }

    Dog(string name, int age){
        setName(name);
        setAge(age);
        cout << "Creating Dog" << endl;
    }
    ~Dog(){
        cout << "Deleting Dog" << endl;
    }
};
#endif