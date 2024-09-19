//  Stack implementation using linked list
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int value){
        data=value;
        next=NULL;
    }
};

class Stack{
    Node* top;
    int size ;          // actual size of the stack
    
    public:
    Stack(){
        top=NULL;
        size=0;
    }

    // implementing function :   "push","pop", "peek", "isEmpty","isSize";

    // PUSH
    void push(int value){
        Node *temp=new Node(value);
        if(temp==NULL){                                         // memory location is happening in heap, consider a case when Heap is full
            cout<<"Stack Overflow\n";
            return ;
        }else{
        temp->next=top;
        top=temp;
        size++;
        cout<<"pushed "<<value<<" into the stack"<<endl;
        }
    }

    void pop(){
        if(top==NULL){
            cout<<"Stack underflow"<<endl;
        }else{
            Node *temp=top;
            cout<<"Popped "<<top->data<<" from the stack"<<endl;
            top=top->next;
            delete temp;
        }
    }
    int peek(){
        if(top==NULL){
            cout<<"The stack is empty"<<endl;
            return -1;
        }else{
            return top->data;
        }
    }

    bool isEmpty(){
        return top==NULL;
    }
    int isSize(){
        return size;
    }
};


int main(){
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.pop();
    cout<<s.peek()<<endl;
    cout<<s.isEmpty()<<endl;
    cout<<s.isSize()<<endl;

}