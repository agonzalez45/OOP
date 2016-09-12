#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;


int main()
{
    vector<string> v;
    ifstream in("code.cpp");
    string s, code;
    int x, i, j;
    int count=13;
    string output(code.length(), ' '); // initially set sufficient length

    while(getline(in, code)) //getline is used to read line by line
    {
        v.push_back(code);
        reverse(v.rbegin(), v.rend());
        cout << count-- << ": " << v[i] << endl;
    }
          return 0;
}