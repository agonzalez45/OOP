#ifndef OBJ_H_INCLUDED
#define OBJ_H_INCLUDED

#include <iostream>
#include <vector>
#include "Shared.h"
using namespace std;

class Obj: public Shared{
public:
    string n;
    Obj(){
        
    }
    Obj(string s){
       n=s;
        cout << "New " << s << endl; 
    }
    ~Obj(){
        cout << "Delete " << n << endl;
    }


};

#endif // OBJ_H_INCLUDED