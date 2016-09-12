#include <iostream>
#include "Object.h"

using namespace std;
//initializes the static member of class object
int Object::count = 0;

Object f(Object& someObject){
    return someObject;
}

int main(int argc, const char * argv[])
{

    Object myObject;

    Object another = f(myObject);
    
    cout << another.count << endl;
    return 0;
}

