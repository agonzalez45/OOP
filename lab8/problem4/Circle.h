#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED

#include "Sortable.h"
#include "Data.h"

class Circle : public Sortable {
public:
    int radius;

    Circle(){
        radius = 0;
    }

    Circle (int r) {
        radius = r;
    }

    void print(){
        cout << "Circle with radius: " << this->radius << endl;
    }

    bool compare (const Sortable * s){
        Sortable *sch = const_cast<Sortable *>(s);
        Circle *chk = reinterpret_cast<Circle*>(sch);
        if (chk->radius < this->radius){
            return false;
        }
        else{
            return true;
        }
    }

    ~Circle(){

    }
};
#endif // CIRCLE_H_INCLUDED
