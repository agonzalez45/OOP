#ifndef STACK_H
#define STACK_H
#include <cassert>
#include <iostream>

struct Stack {
    struct Link {
        double* data;
        Link* next;
        
        void initialize(double* dat, Link* nxt){
            data = dat;
            next = nxt;
        }
    }* head;
    
    Stack(int x){
        head = 0;
        double les=1;
        for (int i =0;i<x;i++){
            double* temp = new double(les);
            push(*temp);
            les=les+.1;
        }
    }
    Stack(){
        head = 0;
    }
    
    void push(double trouble){
        double* temp = new double(trouble);
        Link* newLink = new Link;
        newLink->initialize(temp, head);
        head = newLink;
    }
    
    void* peek(){
        if (head == 0){
            std::cout << "Stack is empty";
        }
        return head->data;
    }
    
    double pop(){
        if(head == 0)
            return 0;
        
        double* result = head->data;
        Link* oldHead = head;
        head = head->next;
        delete oldHead;
        return *result;
    }
    ~Stack(){
        if (head == 0){	}
        else{
            do{
                std::cout<<pop()<<" ";
                
            }while (head!=0);
        }
        
    }
    void cleanup(){
        if (head == 0){
            std::cout << "Stack is empty";
        }
        else {
            std::cout << "Stack is not empty";
        }
    }
};
#endif