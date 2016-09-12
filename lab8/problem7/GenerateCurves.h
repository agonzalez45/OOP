#include <iostream>
#include <vector>

using namespace std;
class Vec{
public:
    float x,y;
    
    Vec(){
     
    }
    Vec(float xC, float yC){
        x=xC;
        y=yC;
    }
    void add(Vec v){
        x+=v.x;
        y+=v.y;
    }
    void print(){
        cout<<"("<<x<<", "<<y<<")"<<endl;
    }
};
class XYData{
public:
    vector<Vec> pointv;
    void add(Vec v){
        pointv.push_back(v);
    }
    Vec max(){
        int max=0;
        int maxi=0;
        for(int i=0;i<pointv.size();i++){
            
            if(pointv[i].y>max){
                maxi=i;
                max=pointv[i].y;
            }
        }
        return pointv[maxi];
    }
    virtual void generate(float xini, float xend,float inc){
        Vec v;
         for(float i=xini;i<xend;i+=inc){
            v.x=i;
            add(v);
          }
        
    }
};

class QuadraticCurve:public XYData{
public:
    float a,b,c;
    QuadraticCurve(float ap,float bp, float cp){
        a=ap;
        b=bp;
        c=cp;
    }
    void generate(float xini,float xend,float inc){
        Vec v;
        for(float i=xini;i<=xend;i+=inc){
            v.x=i;
            v.y=v.x*v.x+b*v.x+c;
            add(v);
        }
    }
    
};

class CubicCurve:public XYData{
    
public:
    float a,b,c,d;
    CubicCurve(float ap, float bp, float cp, float dp){
        a=ap;
        b=bp;
        c=cp;
        d=dp;
    }
    void generate(float xini, float xend, float inc){
        Vec v;
        for(float i=xini;i<=xend;i+=inc){
            v.x=i;
            v.y=v.x*v.x*v.x+b*v.x*v.x+c*v.x+d;
            add(v);
            
        }
    }
    
};