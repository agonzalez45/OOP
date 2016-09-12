#include <iostream>
#include "Dog.h"

using namespace std;

int main()
{
    Dog myDog = Dog("Snoopy", 4);
    
    cout << myDog.getName() << " is " << myDog.getAge() << endl;

    return 0;
}

