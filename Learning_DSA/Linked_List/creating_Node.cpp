#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = nullptr;  // Better practice in modern C++
    }
};


int main()
{
    //## Static creation of the object from the class
    /*
    Node A(4);
    cout << A.data << endl; // Prints the data stored in node A
    cout << A.next << endl; // Will print 0, since A.next is nullptr
    */

   
   // crating dynamic Nodes
   /* 
   Node* Head= new Node(4);
   cout<<"value of the data"<<"-->"<<Head->data<<endl;
   cout<<"value of the address"<<"--->"<<Head->next<<endl;
   cout<<"value of Adressss of the node---->"<<Head;
   */

   
    
   // creating linked list from the array , let array:[2,3,4,5,6];
   int arr[]={2,3,4,5,6};
     cout<<"The original Array is: "<<endl;
     for(int i=0; i<5; i++){
        cout<<arr[i]<<"  ";
     }
     cout<<endl;

     
   Node* Head;

   cout<<"The initial addresss of the data pointed inside  Head pointer is :  "<<Head<<endl;
   Head=nullptr;          
   cout<<"Head's value after the null is : "<<Head<<endl;
   cout<<"Address of the variable pointer Head is : "<< (&Head)<<endl;
   for(int i=0; i<5; i++){
   if(Head==NULL){
    Head=new Node(arr[i]);
   }else{
    Node * temp;           // temp variable will be terminated because it is statically defined when the scope ends 
    temp=new Node(arr[i]);   // this pointer we have to delete because , this is dynamically defined; 
    temp->next=Head;
    Head=temp;
   }
   }
cout<<" ";

Node * temp=Head;

cout<<"Printing the data in the linked list"<<endl;


// Printing the linked list
while(temp!=NULL){
    cout<<temp->data<<"  ";
    temp=temp->next;
}
cout<<endl;
cout<<"The final address of the Head is : "<<Head<<endl;

            // Inseting the node at the end of the linked list
            Node * Tail=NULL;
            while(temp->next!=NULL){
                Tail=Tail->next;
            }
            
    return 0;
}