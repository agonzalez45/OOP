#ifndef SortableCircleData_h
#define SortableCircleData_h
#include <vector>

using namespace std;
class Sortable {
    
public:
    virtual bool compare (const Sortable * s) = 0;
    virtual void print () = 0;

	Sortable(){
	}
	~Sortable(){
		cout << "~Sortable()" << endl;
	}
};

class Data{
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
	if(v.empty() == true){
		cout << "Dataset empty" << endl;
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
	cout << "~Data()" << endl;
    }
	virtual void remove(int index){
		if(v.empty() == true){
			cout << "Dataset empty" << endl;
		}
		if(index<v.size()){
			v.erase(v.begin()+index);
		}
		else 
			cout << "Index out of bounds" << endl;
	}
};

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
	cout << "~Circle()" << endl;
    }
};

#endif
