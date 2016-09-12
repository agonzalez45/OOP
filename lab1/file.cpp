#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
	ifstream in("words.txt");
	int count=0;
	string word;
	while(in >> word)
	{
		count++;
	}
	cout << count << endl;
return 0;
}
	
