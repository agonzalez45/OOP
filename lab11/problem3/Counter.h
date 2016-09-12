#ifndef COUNTER_H
#define COUNTER_H
#include <iostream>
#include <cstdlib>
#include <stdlib.h>

using namespace std;
class Counter{
public:
	void* operator new[](size_t n){
		void* ptr;
		ptr = malloc(n);
		cout << "new " << ((n/(sizeof(Counter)))-1) << " counters starting at " << count << endl;
		return ptr;
	}

	void operator delete[]( void* p ){
		cout << "delete counters" << endl;
		free(p);
	}

	static void* operator new(size_t n){
		void* ptr;
		cout << "new" << endl;
		ptr = malloc(n);
		return ptr;
	}

	void operator delete( void* ptr ){
		cout << "delete" << endl;
		free(ptr);
	}
	int ID;
	static int count;

	Counter( ) : ID(count++) {
		//cout << ID << " created" << endl;
	}

	~Counter(){
		//cout << ID << " destroyed" << endl;
	}
};
#endif
