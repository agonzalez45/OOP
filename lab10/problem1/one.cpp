#include <iostream>
#include <vector>
#include "SomeHeader.h"
using namespace std;
int main(){

  vector <A*> vec;
  initVec(vec);
  for(int i = 0; i < vec.size(); i++){
    cout << typeid(*vec[i]).name() << endl;
  }
}
