#ifndef RECT_H
#define RECT_H
#include <iostream>
#include "Vec.h"
using namespace std;

class Rect{
public:
	float a, b, c, d;

	Rect(){
		a=0;
		b=0;
		c=0;
		d=0;
	}

	Rect(float A, float B, float C, float D){
		a=A;
		b=B;
		c=C;
		d=D;
	}
	
	bool contains(Vec r){
		
		if((r.x > a && r.x < (a+c)) && (r.y < b && r.y > (b-d))){
			return true;
		}
        else
            return false;
	}
};

#endif
