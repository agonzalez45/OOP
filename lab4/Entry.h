#ifndef ENTRY_H 
#define ENTRY_H 
#include <iostream> 
#include <string> 
using namespace std; 

struct Entry 
{ 
	string name, lastname, email; 

void setName(const string first_name)
{ 
	name = first_name; 
} 

void setLastname(const string last_name)
{ 
	lastname = last_name; 
} 

void setEmail(const string mail)
{ 
	email = mail; 
} 

void print()
{ 
	cout << "First Name: " << name << endl; 
	cout <<"Last Name: " << lastname << endl; 
	cout << "Email: " << email << endl; 
} 
}; 
#endif