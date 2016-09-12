#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED

#include <iostream>
#include <vector>
#include "Sortable.h"

using namespace std;

class Data {
public:
    Sortable* save;
    vector <Sortable *> v;

    Data(){

    }

    void add(Sortable *s){
        v.push_back(s);
    }

    virtual void print(){
        for (vector<Sortable*> :: iterator i = v.begin(); i != v.end(); i++){
            (*i)->print();
        }
    }

    virtual void sort (){
        for (int i = 0; i < v.size(); i++){
            for (int j = i + 1; j < v.size(); j++){
                save = v[i];
                if ( v[j]->compare(v[i])){
                    v[i] = v[j];
                    v[j] = save;
                }
            }
        }
    }

    ~Data (){

    }
};


#endif // DATA_H_INCLUDED
