#ifndef PRINT_H
#define PRINT_H

using namespace std;
#include <iostream>

template<class X>
void print(X x, int a){
	for(int i =0; i < a; i++){
		cout << x[i] << " ";
	}	
	cout << endl;
}

#endif
