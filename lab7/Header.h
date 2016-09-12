#ifndef HEADER_H
#define HEADER_H

#include <algorithm>

using namespace std;

class AppRect{
public:
    int x;
    int y;
    int w;
    int h;
    
    AppRect(){
        x = 0;
        y = 0;
        w = 0;
        h = 0;
    }
    
    AppRect(int x, int y, int w, int h){
        this->x = x;
        this->y = y;
        this->w = w;
        this->h = h;
    }
};


class AppWindow{
public:
    AppRect appRect;
    

    
	AppWindow(){
        
    }
    
	AppWindow ( int x, int y, int w, int h ){
        appRect = AppRect(x, y, w, h);
	}
    
	AppWindow ( const AppRect& r ){
        appRect = r;
    }

    const AppRect& rect(){
        return appRect;
    }
   
    virtual void resize ( int w, int h ){
        appRect.w = w;
        appRect.h = h;
    }
    
};

class CircleWin: public AppWindow{
public:
    CircleWin(int x, int y, int w, int h){
        appRect = AppRect(x, y, w, h);
    }
    
    CircleWin(const AppRect &rect){
        appRect = rect;
    }
    
    void resize(int w, int h){
        cout << "radius: " << min(w, h) << endl;
    }
};

class RectWin: public AppWindow{
public:
    RectWin(int x, int y, int w, int h){
        appRect = AppRect(x, y, w, h);
    }
    
    RectWin(const AppRect &rect){
        appRect = rect;
    }
    
    void resize(int w, int h){
        cout << "area: " << w*h << endl;
    }
};

#endif