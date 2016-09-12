#ifndef COUNTER_H
#define COUNTER_H
#include <iostream>
#include <cstdlib>
using namespace std;
class Counter{
public:
    /*
	static void* operator new(size_t num){
		void* ptr;
		cout << "new" << endl;
		ptr = malloc(num);
		return ptr;
	}

	static void operator delete ( void* ptr ){
		cout << "delete" << endl;
		free(ptr);
	}
     */
    
    static void* operator new[](size_t n){
        void* ptr;
        cout << "new" << endl;
        ptr = malloc(n);
        return count(n);
    }
    static void operator delete ( void* p ){
        cout << "delete" << endl;
        free(p);
        }
    

	int ID;
	static int count;

	Counter( ) : ID(count++) {
		cout << ID << " created" << endl;
	}

	~Counter(){
		cout << ID << " destroyed" << endl;
	}
};
#endif