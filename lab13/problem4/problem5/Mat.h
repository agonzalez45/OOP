#ifndef MAT_H
#define MAT_H
#include "Vec.h"
#include <iostream>
using namespace std;
class Mat: public Vec{
public:
    static Mat Identity;
    float a, b, c, d;
    Mat(){
        a = 0;
        b = 0;
        c = 0;
        d = 0;
    }
    ~Mat(){
        
    }
    Mat(float a, float b, float c, float d){
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
    }
    Mat operator + (const Mat& t)const{
        return Mat(a+t.a, b+t.b, c+t.c, d+t.d);
    }
    Mat operator - (const Mat& t)const{
        return Mat(a-t.a, b-t.b, c-t.c, d-t.d);
    }
    Mat operator * (const Mat & t)const{
        return Mat((a*t.a) + (b*t.c), (a*t.b) + (b*t.d), (c*t.a) + (d*t.c), (c*t.b) + (d*t.d));
    }
};

Mat Mat::Identity = Mat(1, 0, 0, 1);

Mat operator * (int n, const Mat & t) {
    return Mat((t.a) * n , (t.b) * n, (t.c) * n , (t.d) * n);
}

Vec operator * (const Vec & v, const Mat & t){
    return Vec((v.x * t.a) + (v.y* t.c), (v.x * t.b) + (v.y * t.d));
}

#endif