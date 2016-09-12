#ifndef REFS_H
#define REFS_H 
#include <iostream> 

using namespace std; 

int triple(int& n) //& will change the variable by passing to function. Call by reference
{
	n = n*3;
	return n;
}

#endif