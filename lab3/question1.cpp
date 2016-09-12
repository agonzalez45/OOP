/*
Write a program that keeps reading in strings of varied sizes. If an input string has length greater than one store it in a vector. When an input string has length one (a single character) you will output the string stored in your vector that has the first letter matching the input character. Keep doing this while you read string "quit".
*/
#include <string>
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
string compare(string s, vector<string> &v)
{
	string check;	
	for(int i = 0; i<v.size(); i++)
	{
		check = v[i];
		if(check[0]==s[0])
		{
			return check;
		}
		else 
		{
			continue;		
		}
	}
}
int main()
{
	vector<string> v;
	vector<string> v2;
	string s,q;
	cin >> s;
	while(s != "quit")
	{
		if(s.size()>1)
		{
			v.push_back(s);
			
			
		}
		else 
		{
			q=compare(s,v);
			v2.push_back(q);	
		}
	cin >> s;
		
	}
	
	for (vector<string>::iterator it = v2.begin() ; it != v2.end(); ++it)
		cout << *it << endl;
	return 0;
	
}