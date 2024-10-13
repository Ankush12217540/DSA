// Print all element from the queue without removing it from the queue
#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int>q;
    q.push(4);
    q.push(3);
    q.push(2);
    q.push(1);
    q.push(0);

    // value print karwao
    int n=q.size();
    while(n--){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    cout<<endl<<"Size of queue are printing: "<<q.size();
}