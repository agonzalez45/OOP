#ifndef LA8_SomeHeader_h
#define LA8_SomeHeader_h
#include <iostream>
#include <vector>

using namespace std;
class Time{
public:
  int hours;
  int mins;
  int seconds;

  Time();
  Time(int h, int m, int s){
    setHour(h);
    setMinute(m);
    setSecond(s);
  }

  void setHour(int hr){
    hours = hr;
  }
  void setMinute(int mi){
    mins = mi;
  }
  void setSecond(int se){
    seconds = se;
  }


  int getHours(){
    return hours;
  }
  int getMinutes(){
    return mins;
  }
  int getSeconds(){
    return seconds;
  }

void add(const Time &t){
  int h1;
  int m1;
  int s1;
  int r1 = 0;
  int r2 = 0;

  s1 = this->seconds + t.seconds;
  if(s1 > 59){
    r1 = 1;
    s1 -=60;
  }

  m1 = this->mins + t.mins + r1;
  if(m1 > 59){
    r2 = 1;
    m1 -= 60;
  }

  h1 = this->hours + t.hours + r2;
  if(h1 > 23){
    h1 -= 24;
  }
  setHour(h1);
  setMinute(m1);
  setSecond(s1);

}
  ~Time(){

  }
    
    void getAngles (float& h, float& m, float& s) {
        s = (6 * seconds); //Calculates in degrees
        
        if((s+90) >=360) //Conversion to specified angles
        {
            s  =  (450 - s);
            s  = s *(M_PI/180);
        }
        else
        {
            s = s + 90;
            if(s > 180 && s < 360)
            {
                s = 180 - s;
                s = s *(M_PI/180);
            }
            
            else
            {
                s = 180 - s;
                s = s *(M_PI/180);
            }
            
        }
        
        m = (6 * mins); //Calculates in degrees
        
        if((m+90) >=360)  //in 4th quad
        {
            m  =  (450 - m);
            m  = m *(M_PI/180);
        }
        
        else
        {
            m = m + 90;
            if(m > 180 && m < 360)
            {
                m = 180 - m;
                m  = m *(M_PI/180);
            }
            else
            {
                m  = 180 - m;
                m  = m *(M_PI/180);
            }
        }
        
        h = (0.5 * (hours*60 + mins)); //Calculates in degrees along with minutes
        
        if((h + 90) >= 360)
        {
            h =  (450 - h);
            h  = h *(M_PI/180);
        }
        
        else
        {
            h = h + 90;
            if(h > 180 && h < 360)
            {
                h = 180 - h;
                h = h *(M_PI/180);
            }
            
            else
            {
                h = 180 - h;
                h = h *(M_PI/180);
            }
        }
        
    }
    
    
};


#endif
