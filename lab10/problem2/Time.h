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

};


#endif
