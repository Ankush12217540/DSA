// we dont need to create stack using array or liked list, as 
// we already have STL , we make our work easy;

#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> S;                 // under the hood, its implementation is done using "DEQUE"
    S.push(5);
    S.push(4);
    S.push(3);
    S.push(2);
    S.push(1);

    cout << "Size of stack: " << S.size() << endl; // Prints the size of the stack
    cout << "Top element: " << S.top() << endl;   // Prints the top element of the stack

    S.pop(); // Removes the top element from the stack

    // Printing top element after pop
    cout << "New top element after pop: " << S.top() << endl;

    // Check if the stack is empty
    cout << "Is stack empty? " << (S.empty() ? "Yes" : "No") << endl;

    return 0;
}

 // IF 'vector' can do push_back and pop_back, then why do we needed
 // the concept of 'Stack', if the vector can do every work??
// ANS==> 