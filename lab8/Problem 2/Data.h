#ifndef DATA_h
#define DATA_h
#include <vector>
using namespace std;

class Data {
public:
	int c; //temp swap
	vector<int> v;
	void add (int number){
		v.push_back(number);
	}
	
	void print (){
		for(int i = 0; i != v.size(); i++)
        {
                cout << v[i] << " ";
        }
        cout << endl;
	}
	
	void sort (){ //bubble sort
        for(int i = 0; i != v.size(); i++){
            for(int i = 0; i < (v.size()-1); i++){
                for(int j = 0; j < v.size()-1; j++){
                    if(v[j] > v[j+1]){
                        c = v[j];
                        v[j] = v[j+1];
                        v[j+1] = c;
                    }
                }
            }
        }
    }
};

#endif
