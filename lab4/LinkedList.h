#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED
#include <iostream>

using namespace std;

struct LinkedList
{
   struct Link
    {
		void* data;
		Link* next;

		void initialize(void* dat, Link* nxt){
			data = dat;
			next = nxt;
		}
	}* head;

    LinkedList(void* dt, Link* nx)
    {
        Link* newLink = new Link;
		newLink->initialize(dt, nx);
		head = newLink;
    }

void* add(LinkedList::Link* l, int n)
{
    Link* current;
    current = head;
    while(current != l){
        current = current->next;
    }

    if(current->next != NULL)
    {
        delete current->next;
    }

    for (int i = 0; i < n; i++)
    {
            current->next = new Link;
            current->next->initialize(new int (i), NULL);
            current = current->next;
    }
}

void print()
{
    double* d;
    int* i;
    Link* p;
    p = head;

    d = ((double*)p->data);
    cout << *d << endl;
    p = p->next;

    while(p != NULL){
        i = ((int*)p->data);
        cout << *i << endl;
        p = p->next;
    }
}

void cleanup()
{
    Link* temp = head;
    while(head->next != NULL){
        head = head->next;
        delete temp;
        temp = head;
    }
    delete temp;
}
};
#endif
