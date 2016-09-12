#ifndef ENTRY_H

#define ENTRY_H

#include <iostream>

#include <string>

#include <vector>

using namespace std;



struct AddressBook{
    
    vector <Entry> v;
    
    AddressBook(string name, string lastName, string email);
    
    {
        
        Entry* newEntry = new Entry(name, lastName, email);
        
        v.push_back(*newEntry);
        
    }
    
    
    void add(AddressBook* newAddressBook)
    
    {
        
        Entry newEntry = (*newAddressBook).v[0];
        
        v.push_back(newEntry);
        
    }
    
    
    void print()
    
    {
        
        for int (i = 0; i < v.size(); i++)
            
        {
            
            cout << "First Name: " << v[i].fname << endl;
            
            cout << "Last Name: " << v[i].lname << endl;
            
            cout << "Email: " v[i].email << endl;
            
            cout << endl;
            
        }
        
    }
    
};

#endif

