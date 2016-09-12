#ifndef STACK_H
#define STACK_H

#include <iostream>

struct Stack
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

	void (*deletecb) (void * pt);

	void initialize(){
		head = 0;
	}

	void setDeleteCallback ( void (*delcb) (void *pt) )
    {
        deletecb = delcb;
	}

	void push(void* dat)
    {
		Link* newLink = new Link;
		newLink->initialize(dat, head);
		head = newLink;
	}

	void* peek()
    {
		if (head == 0)
        {
			std::cout << "Stack is empty";
		}
		return head->data;
	}

	void* pop()
    {
		if(head == 0)
			return 0;

		void* result = head->data;
		Link* oldHead = head;
		deletecb(head->data);
		head = head->next;
		delete oldHead;
		return result;
	}

	void cleanup()
    {
        while(head != NULL){
            pop();
        }
	}

};
#endif
