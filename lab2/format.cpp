#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n;
    string bin;
    
    while(cin >> n)
    {
        if(n==-1)
        {
            break;
        }
        cout << hex << n << " ";
        
        while(n!=0)
        {
            if(n % 2==1)
            {
                bin = bin + '1';
                n=n/2;
            }
            if(n%2==0)
            {
                bin = bin + '0';
                n=n/2;
            }
        }
        bin=string(bin.rbegin(),bin.rend()); //reverses the string
        bin.erase (bin.begin()); //erases the first character in the string
        cout << bin;
        bin.clear(); // clears the string bin
    }
}


