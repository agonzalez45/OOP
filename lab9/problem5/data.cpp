#include <iostream>
#include "SortableCircleData.h"

int main(int argc, const char * argv[])
{
    Data * myData = new Data();
    char user;
    int r;
    int index;
    cin >> user;
    while(user != 'Q'){
        
        if(user == 'A'){
            cin >> r;
            myData->add(new Circle(r));
        }
        else if(user == 'R'){
            cin >> index;
            myData->remove(index);
        }
        else if(user == 'S'){
            myData->sort();
        }
        else if(user == 'P'){
            myData->print();
        }
        else if(user == 'D'){
            delete myData;
        }
        cin >> user;

    }
    //myData->print(); //check

    
    /*
    myData->add(new Circle());
    myData->add(new Circle(3));
    myData->add(new Circle(2));
    myData->add(new Circle(4));
    myData->add(new Circle(1));
    
    myData->print();
    
    myData->remove(3);
    
    myData->print();
    
    delete myData;
     */
    
    return 0;
}

