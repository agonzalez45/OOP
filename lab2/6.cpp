#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int decNum(int num)
{
	int bin, dec = 0, rem, base = 1;
	bin = num;
	while (num > 0)
	{
		rem = num % 10;
		dec = dec + rem * base;
		base = base * 2;
		num = num / 10;
	}
	cout << dec << " ";
}

int main()
{
	
	string bin;
	getline(cin, bin);		//take in binary number (like 1010101) as a string
	unsigned int val = 0;	//placeholder to store 8 digit binary number
	int i = 0;
	while ((bin[i] == '1' || bin[i] == '0') && i < bin.length())
	{
		val = (val*10) + (bin[i] - '0');	// shift val over to the left one space and either add '0' or '1' and subtract '0's ascii value to get an int of 1 or 0
		if ((i+1)%8 == 0){						//every 8 digits convert and reset val
			decNum(val);
			val = 0;
		}
		i++;
	}

    if (val != 0)
		decNum(val); //the remainding digits of 0 and 1 should be converted to if there are not a total of 8
    
	return 0;



}