/*
Write a program that reads in a string of zeros and ones without spaces and for each 8 digits (one byte) outputs the corresponding value in decimal format. The output numbers are separated by spaces. Stop when a character different than 0 or 1 is encountered. The final output may be generated from less than 8 digits but no output should be generated for the final character.
 
 sample input: 00000011000000010010X
 sample output: 3 1 2
*/
#include <iostream>
#include <math.h>
#include <stdlib.h>
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
    string n;
    string str1, str2, str3;
    string bin;
    cin >> n;
    while(n>"0")
    {
            //if(i==2||i==3||i==4||i==5||i==6||i==7||i==8||i==9)

    
    
        for(int i = 0; i<n.length(); i++)
        {
            
        	if(i<0||i>1)
        	{
           	 	exit(-1);
        	}
        }

        str1=n.substr(0,8);
        str2=n.substr(8,8);
        str3=n.substr(16,5);
        str3.erase (str3.begin()+4); //erases the first character in the string
        
        int str11 = atoi(str1.c_str()); //converts string to int
        int str12 = atoi(str2.c_str());
        int str13 = atoi(str3.c_str());

        //cout << str1;
        //cout << str2;
        //cout << str3;
        for(int i = 0; i<n.length(); i++)
        {
            
        	if(n[i]<0||n[i]>1)
        	{
           	 	exit(-1);
        	}
        }

        
            cout << binaryToBase10(str11) << " ";
            cout << binaryToBase10(str12) << " ";
            cout << binaryToBase10(str13) << endl;
        
        
        /*
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
         */
        //cout << bin.length() <<endl; //check
        
        
        /*
        for (int i = 0; i < sizeof(bin); i++) {
            bin[i] = '\0';
        }
         */
        //bin.clear();
        //bin=string(bin.rbegin(),bin.rend()); //reverses the string
        //bin.erase (bin.begin()+6); //erases the first character in the string
        //cout << bin;
        //bin.clear(); // clears the string bin
        
        return -1;
    
	}
}