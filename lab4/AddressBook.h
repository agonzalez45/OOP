#ifndef ENTRY_H
#define ENTRY_H
#include <iostream>
#include <string>
#include <vector>
#include "Entry.h"
using namespace std;


struct AddressBook
{
    
    vector <Entry> v;
    AddressBook(string name, string lastName, string email)
    {
        Entry newEntry = Entry();
        newEntry.setName(name);
        newEntry.setLastname(lastName);
        newEntry.setEmail(email);
        v.push_back(newEntry);
    }
    
    void add(AddressBook* newAddressBook)
    {
        Entry newEntry = (*newAddressBook).v[0];
        v.push_back(newEntry);
    }
    
    void print()
    {
        for (int i = 0; i < v.size(); i++)
        {
            cout << "First Name: " << v[i].name << endl;
            cout << "Last Name: " << v[i].lastname << endl;
            cout << "Email: " << v[i].email << endl;
            cout << endl;
        }
    }
    
};
#endif