#include <iostream>
#include "Stash.h"

using namespace std;
int main()
{
	Stash myStash;
	myStash.initialize(sizeof(double));
	int N;
	cin >> N;
	double arr[N];
	double in;

	for(int i = 0; i<N; i++)
	{
		cin >> in;
		myStash.add(new double(in)); 
	}
	for(int j = 0; j<N; j++)
	{
		cout <<  *(double*)myStash.fetch(j) << endl;;
	}
	myStash.cleanup();

return 0;
}
