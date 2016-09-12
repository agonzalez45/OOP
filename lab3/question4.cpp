#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(){
    bool c = true;
    string s;
    cin >> s;
    int n;
    //vector of "vector of string v"
    vector <vector<string>* > v;
    
    //making 10 spots in vector v
    for(int i = 0; i < 10; i++){
        v.push_back(new vector<string> );
    }
    
    while (s != "quit"){
        n = s.size();
        //v.at() checks for the size of n to see if it is in the bounds
        //kinda like v(n)
        for (int l = 0; l < v.at(n)->size(); l++){
            if (v.at(n)->at(l) == s){
                c = false;
            }
        }
        if (c == true){
            v.at(n)->push_back(s);
        }
        c = true;
        cin >> s;
    }
    
    for(int j = 0; j < 10; j++){
        if (!v.at(j)->empty()){
            for (int k = 0; k < v.at(j)->size(); k++){
                cout << v.at(j)->at(k) << " ";
            }
        }
        else{
            continue;
        }
        cout << endl;
    }
    
    return 0;
}
