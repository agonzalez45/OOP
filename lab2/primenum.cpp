#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int N;
	cin >> N; 


	if(N>3){
		cout << 2 << endl;
		cout << 3 << endl;
			for(int i=3; i < N; i++){
				if(!(i%2==0) && !(i%3==0))
				cout << i << endl;
				}
	}

}


	
