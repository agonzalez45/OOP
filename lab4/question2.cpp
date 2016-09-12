#include <iostream>
#include "Stack.h"

using namespace std;
int main()
{
	Stack *myStack=new Stack();
	myStack->initialize();
	int N;
	cin >> N;
	double in;

	for(int i = 0; i<N; i++)
	{
		cin >> in;
		myStack->push(new double(in));
	}
	Stack*temp;
	temp=myStack;

	while(temp->head != NULL)
	{
	cout << *(double*)(temp->head->data) << endl;
	temp->head= temp ->head->next;
	}
	
	for(int j = 0; j<N; j++)
	{
		myStack->pop();
	}

	myStack->cleanup();
	cout << endl;
return 0;
}
