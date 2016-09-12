/*
Write a program that reads in a string of zeros and ones without spaces and for each 8 digits (one byte) outputs the corresponding value in decimal format. The output numbers are separated by spaces. Stop when a character different than 0 or 1 is encountered. The final output may be generated from less than 8 digits but no output should be generated for the final character.
 
 sample input: 00000011000000010010X
 sample output: 3 1 2
*/
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
    string n, m;
    string str1, str2, str3;
    string bin;
    cin >> n;
    for(int i = 0; i<n.length(); i++)
    {
            if(n!="0"&&n!="1")
            {
                break;
            }
            m[i]=n[i];
    }
    
    str1=m.substr(0,8);
    str2=m.substr(8,8);
    str3=m.substr(16,8);
    str3=str3.substr(0, str3.size()-1); //erases the last character in the string
    
    int str11 = atoi(str1.c_str()); //converts string to int
    int str12 = atoi(str2.c_str());
    int str13 = atoi(str3.c_str());
   
    
    cout << binaryToBase10(str11) << " ";
    cout << binaryToBase10(str12) << " ";
    cout << binaryToBase10(str13) << endl;
    

    
    

}