#include <string>
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;
int main()
{
	string c;
	int n;

    while(cin >> c && cin >> n)
	//while(n != -2 && n!= -1)
	{
        if(n!=-2 && n!=-1){
		for(int i = 0; i<n; i++)
		{
			cout << c;
		}
        }
		if(n==-1)
		{
			cout << " " << endl;

		}
		if(n==-2)
		{
			break;
		}
  
    }

    
    
return 0;

}
