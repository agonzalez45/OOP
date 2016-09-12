#include <iostream>
#include <string>
#include <vector>
#include "Dog.h"
#include "display.h"

using namespace std;

int main(){
    int n;
    int i=0;
	char chr;
	string str;
	int age;
	
	cin >> n;
    vector<Animal*> v;
    
    while(i<n)
    {
        cin >> chr;
        cin >> str;
        cin >> age;
        i++;
        if(chr == 'A')
        {
            Animal *a = new Animal;
            a->setName(str);
            v.push_back(a);
        }
        if(chr == 'D')
        {
            v.push_back(new Dog(str, age));
        }
    }
     display(v);
}