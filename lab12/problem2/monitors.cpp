#include <iostream>
#include "Monitor.h"

int Monitor::count = 0;

void test(){
    static Monitor mon;
    mon.incident();
    mon.print();
}

int main()
{
    Monitor m;

    m.incident();
    m.incident();
    
    m.print();
    
    test();
    test(); 
    return 0;
}

