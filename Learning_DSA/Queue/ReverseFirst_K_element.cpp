// Reversing the first k element of the queue
#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void ReverseFirstK(queue<int> &q){
    int k;
    cout<<"Enter the value of K : "; cin>>k;cout<<endl;

    stack<int>s;
    while(k--){
        s.push(q.front());
        q.pop();
    }
    int size=q.size();
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    } 
    while(size--){
        q.push(q.front());
        q.pop();
    }
    
} 
void display(queue<int> q){
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    } 

    cout<<endl;
}

int main(){
    
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);

    cout<<"Queue : Original queue: ";
    display(q);
    ReverseFirstK(q);
    cout<<"Queue: k element reversal "; display(q);

}
