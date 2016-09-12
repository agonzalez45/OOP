#include <cstring>
#include <vector>
#include <iostream>
using namespace std;
template<class A>
class SimpleHashTable{
public:
    
    unsigned size;
    vector< vector<A> > Input;
    SimpleHashTable() :size(50){
        Input = vector<vector<A> >(size);
    }
    
    ~SimpleHashTable(){
        Input.clear();
    }
    
    void set ( const char* key, A value ){
        Input[hash_func(key,size)].push_back(value);
    }
    
    A get ( const char* key ){
        return Input[hash_func(key,size)].at(0);
    }
    
    static unsigned hash_func ( const char* key, unsigned size ){
        unsigned h = 0;
        for ( unsigned i=0; i<strlen(key); i++ ){
            h += key[i];
        }
        return h%size;
    }
    
    void print(){
        for(int i = 0; i < Input.size(); i++){
            if(Input[i].size() == 0){
                continue;
            }
            cout << i << ": " << Input[i][0] << " ";
            for(int j = 1; j < Input[i].size(); j++){
                cout << "col:" << Input[i][j] << " ";
            }
            cout <<endl;
        }
    }
};
