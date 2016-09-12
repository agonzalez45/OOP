#include <iostream>
#include <math.h>

using namespace std;
int binaryToBase10(int n)
{
    int output = 0;
    
    for(int i=0; n > 0; i++) {
        
        if(n % 10 == 1) {
            output += (1 << i);
        }
        n /= 10;
    }
    
    return output;
}


int main()
{
    int n;
    string bin;
    int zero = 0;
    int one = 1;
    while(cin >> n)
    {
        if(n==-1)
        {
            break;
        }
        cout << binaryToBase10(n) << " ";
        n=binaryToBase10(n);
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
        //cout << bin.length() <<endl; //check
        
        if(bin.length() == 6)
        {
            bin.erase (bin.begin()+5); //erases the fifth character in the string
        }
        if(bin.length() == 3)
        {
            bin.erase (bin.begin()+2); //erases the fifth character in the string
        }

        cout << bin << " ";
        bin=string(bin.rbegin(),bin.rend()); //reverses the string
        
      
        for(int i = 0; i<bin.length(); i++)
        {
            while(bin[i]=='1')
            {
                bin[i]='0';
                i++;
            }
            while(bin[i]=='0')
            {
                bin[i]='1';
            }
                  
                  
       }
        cout << bin << endl;
        /*
        for (int i = 0; i < sizeof(bin); i++) {
            bin[i] = '\0';
        }
         */
        bin.clear();
        //bin=string(bin.rbegin(),bin.rend()); //reverses the string
        //bin.erase (bin.begin()+6); //erases the first character in the string
        //cout << bin;
        //bin.clear(); // clears the string bin
    }

}