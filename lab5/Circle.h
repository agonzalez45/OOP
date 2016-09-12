#ifndef CIRCLE_H
#define STASH_H
#include <iostream>
#include <math.h>
class Circle{
	private:
	double x;
	double y;
	double r;
	double pi = M_PI;
	
	public:
	
	double area;
	Circle();
	~Circle();

	void setX(double X);
	void setY(double Y);
	void setR(double R);

	double getX();
	double getY();
	double getR();

};

Circle::Circle()
{
	x=0;
	y=0;
	r=1;
	area=pi*r*r;
}

Circle::~Circle()
{
		
}
//setters 
void Circle::setX(double X)
{
	x=X;
}

void Circle:: setY(double Y)
{
	y=Y;
}

void Circle:: setR(double R)
{
	r=R;
	area = pi*r*r;
}

// getters 

double Circle::getX()
{
return x;
}
double Circle::getY()
{
return y;
}
double Circle::getR()
{
return r;
}

#endif
