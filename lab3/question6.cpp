#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	string s, t;
	int in;
	vector <string> v;
	
	while(cin >> s)
	{
		if(s == "quit")
		{ 
			break;
		}
	
		if(s.size() < 4)
		{
			if(find(v.begin(), v.end(), s) == v.end())
			v.push_back(s);
		}
	     else{
           t = s;
           for (int i = 0; i < v.size(); ++i){
               in = s.find(v[i]);
               if (in != s.npos){
                   s = s.substr(0, in) + s.substr(in + v[i].size());
               }
           }
           if (find(v.begin(), v.end(), s) == v.end()){
               cout  << s << endl;
               v.push_back(s);
           }
       }
   }
   return 0;
}
