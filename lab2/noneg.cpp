#include <iostream>
#include <math.h>
using namespace std;
int main(){
	int s;

	while(cin >> s){

		if(s%2==0){
			cout << "EVEN" << endl;
			continue;
		}
		if(s == -1){
			break;
		}
		else 
		cout << "ODD" << endl;
			continue;
	}
}
