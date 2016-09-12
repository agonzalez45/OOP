//: C02:Fillvector.cpp
// Copy an entire file into a vector of string
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main() {
    vector<string> v;
    ifstream in("code.cpp");
    string line;
    int b,i;
    while(getline(in, line))
    v.push_back(line); // Add the line to the end
    // Add line numbers:
    for(int i = 0; i < v.size(); i++){
        b = (v.size()-1) -i;
    
    cout << i << ": " << v[b] << endl;
    }
} ///:~