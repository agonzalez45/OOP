#include <iostream>

using namespace std;
struct first{
	char chr;
	double dbl; //16. should be 9
};          //__attribute__((packed));

struct second{
    char chr1;
    char chr2;
    double dbl1;
};          //__attribute__((packed));

struct third{
    char chr3;
    char chr4;
    char chr5;
    double dbl2; //goes to 16 but is actually 11
};              //__attribute__((packed));

struct fourth{
    char chr3;
    char chr4;
    char chr5;
    char chr6;
    double dbl2; // 16. should be 12
};          //__attribute__((packed));

struct fifth{
};          //__attribute__((packed));

struct sixth{
    char chr7;
    int in;
    char chr8;
};          // __attribute__((packed));

struct seventh{
    char chr9;
    char chr10;
    int in1;
};                  //__attribute__((packed));

int main(){

    first one;
    second two;
    third three;
    fourth four;
    fifth five;
    sixth six;
    seventh seven;
    cout << sizeof(one)<< endl; //padding -7
    cout << sizeof(two) << endl; //-6 padding
    cout << sizeof(three) << endl; // -5 padding
    cout << sizeof(four) << endl; //-4 padding
    cout << sizeof(five) << endl;
    cout << sizeof(six)<< endl; //-6 padding
    cout << sizeof(seven) << endl; //-2 padding


}