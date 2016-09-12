#ifndef FIB_H
#define FIB_H
#include <iostream>
using namespace std;
class Fib{
public:
	static int last; // 1
	static int secondLast; // 0
	Fib(){
		
	}
	Fib(int l, int s){
		l =  last;
		s = secondLast;
	}
	~Fib(){
	}
	int next(){
		int first = last + secondLast;
		secondLast = last;
		last = first;
		return last;
	}
	int next(bool n){
		if(n = true){
			last = 1;
			secondLast = 0;	
			int sum = last + secondLast;
			secondLast = last;
			sum = last;
			return sum;
		}
	
	}
};
#endif
