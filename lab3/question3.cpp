#include <iostream>
#include <math.h>
#include <vector>

using namespace std;
int main()
{
	vector<int> v;
	int n;
    int m;
    int total=0;
	while(cin >> n)
    {
		if(n>0)
        {
            v.push_back(n);
        }

        if(n<0)
        {
            m=n*-1;
            for(int i = 0; i<v.size(); i++)
            {
               while(v[i]==m)
               {
                   v.erase(v.begin());
               }
            }
        }
        if(n==0)
        {
            //number of items in vector
            cout << v.size() << " ";
            //sum vector
            for(int i = 0; i<v.size(); i++)
            {
                total+=v[i];
            }
            cout << total << endl;
            
            break;
        }
    }

}