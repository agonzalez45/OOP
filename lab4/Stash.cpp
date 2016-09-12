#ifndef STASH_H
#define STASH_H
#include <cmath>
#include <cassert>
#include <iostream>
using namespace std;
struct Stash {
	int size;      // Size of each space
	int quantity;  // Number of storage spaces
	int next;      // Next empty space
  
	// Dynamically allocated array of bytes:
	unsigned char* storage;
  
	// Functions!
	void initialize(int sz){
		size = sz;
		quantity = 0;
		storage = 0;
		next = 0;
	}
  
	void cleanup(){
		if(storage != 0) {
		  std::cout << "freeing storage" << std::endl;
		  delete []storage;
		}
	}
  
	int add(const void* element){
		if(next >= quantity) // Enough space left?
		  inflate(100);
	  
		// Copy element into storage,
		// starting at next empty space:
		int startBytes = next * size;
		unsigned char* e = (unsigned char*)element;
	  
		for(int i = 0; i < size; i++)
		  storage[startBytes + i] = e[i];
		next++;
	  
		return(next - 1); // Index number
	}

	void* fetch(int index){
		// Check index boundaries:
		assert(0 <= index);
  
		if(index >= next)
			return 0; // To indicate the end
  
		// Produce pointer to desired element:
		return &(storage[index * size]);
	}
  
	int count() {
		return next; // Number of elements in CStash
	}
  
	void inflate(int increase){
		assert(increase > 0);
		
		int newQuantity = quantity + increase;
		int newBytes = newQuantity * size;
		int oldBytes = quantity * size;
		unsigned char* b = new unsigned char[newBytes];
		
		for(int i = 0; i < oldBytes; i++)
			b[i] = storage[i]; // Copy old to new
		
		delete []storage; // Old storage
		storage = b; // Point to new memory
		quantity = newQuantity;
	}
}; ///:~

#endif

int main(){
    
    Stash stash;
    int s;
    int n;
    int countadd=0;
    int countspace=0;
    char c;
    
    cin >> s;
    stash.initialize(s);
    cin >> c;
    cin >> n;
    
    while(c!='&' && n!=99)
    {
        for(int i = 0; i < abs(n); i++)
        {
            if(stash.next >= stash.quantity)
            {
                stash.inflate(s);
                countspace++;
            }
            stash.add(new char (c));
            countadd++;
        }
        if(n<0)
        {
            if(stash.next >= stash.quantity)
            {
                stash.inflate(s);
                countspace++;
            }
            stash.add(new char ('\n'));
            countadd++;
        }
        
        cin >> c;
        cin >> n;
    }
    for(int i = 0; i<countadd; i++)
    {
        cout << *(char*)stash.fetch(i);
    }
    
    cout << countspace << endl;
    cout << stash.quantity << endl;
    
}
