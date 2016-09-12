#ifndef PARTICIPANT_H_INCLUDED
#define PARTICIPANT_H_INCLUDED

#include <string>
#include "Sortable.h"
#include "Data.h"

class Participant : public Sortable {
public:
    string name;
    int age;
    double score;

    static bool(*comp_cb)(const Participant*, const Participant*);

    Participant(){

    }

    Participant(string n, int a, double s) {
        name = n;
        age = a;
        score = s;
    }

    void print(){
        cout << this->name << "\t" << this->age << "\t" << this->score << endl;
    }

    bool compare (const Sortable * s){
    /*
        const Participant *obj = dynamic_cast<const Participant*>(s);
            if (obj){
                if (comp_cb(obj, this))
                    return true;
                else
                    return false;
            }
            else
                return false;
    }
    */
        Sortable *sch = const_cast<Sortable *>(s);
        Participant *chk = reinterpret_cast<Participant*>(sch);
        if (chk->score > this->score){
            return false;
        }
        else if ( chk->score == this->score){
            if (chk->age < this->age){
                return false;
            }
            else if ( chk->age == this->age){
                if (chk->name < this->name){
                    return false;
                }
                else{
                    return true;
                }
            }
            else {
                return true;
            }
        }
        else{
            return true;
        }
    }
*/
    ~Participant(){

    }
};

#endif // PARTICIPANT_H_INCLUDED
