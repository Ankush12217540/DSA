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

Node* CreateLinkedList(int arr[], int index, int size){
    if(index==size)
    return NULL;

    Node* temp=new Node(arr[index]);
    temp->next=CreateLinkedList(arr,index+1, size);
    return temp;
}

int main(){
    Node* Head;
    Head=NULL;
    int arr[]={2,4,6,1,7};
    Head=CreateLinkedList(arr,0,5);
    cout<<"printing the original array "<<" "<<endl;
    
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    cout<<"After deleting the first Node: "<<endl;
    if(Head!=NULL){
    Node* temp =Head;
    Head=Head->next;
    delete temp;  
    }
    cout<<" After the first and last Node"<<endl;
    Node *temp=Head;
    Node* prev=NULL;
    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }

    prev->next = NULL; // Remove the reference to the last node
    delete temp;
    while(Head!=NULL){
        cout<<Head->data<<" ";
        Head=Head->next;
    }
}
