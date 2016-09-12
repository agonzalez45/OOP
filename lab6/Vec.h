#ifndef VEC_H
#define VEC_H
#include <iostream>
using namespace std;

class Vec{
public:
	float x, y;
	static Vec null;
	Vec(){
		x=0;
		y=0;
	}

	Vec(float X,float Y){
		x=X;
		y=Y;
	}

	Vec add(Vec a){
		x= x+a.x;
		y= y+a.y;
		return Vec(x,y);
	}

	~Vec(){

	}
	Vec print(){
		cout << "(" << x << ", "  << y << ")"<< endl;
	}
};

Vec Vec::null = Vec();
#endif
