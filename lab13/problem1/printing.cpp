#include <iostream>
#include <vector>
#include <string>
#include "Print.h"

using namespace std;

template <class X>
void print_five ( X toadd )
{
    for ( int i=0; i<5; i++ )
    { X x = X(i)+toadd;
        cout << x  << " ";
    }
    cout<<endl;
}

int main()
{
string str = "hello";
    print_five<int> ( 0 );
    print_five<double> ( 0.5 );
    
    vector<string> vs; vs.push_back("one"); vs.push_back("two");
    
    vector<int> vi; vi.push_back(1); vi.push_back(2);
    
    char * s[] = {(char*)"ONE", (char*)"TWO"};
    
    print<vector<string> >(vs,2);
    print<vector<int> >(vi,2);
    print<char*[2]>(s,2);
    
    return 0;
}
