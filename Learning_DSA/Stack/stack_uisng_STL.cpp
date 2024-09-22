// we dont need to create stack using array or liked list, as 
// we already have STL , that ake our work easy;

#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> S;                 // under the hood, its implementation is done using "DEQUE"( but DEQUE is also finally the implementation of linked list and array)
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

// If a 'vector' can perform 'push_back' and 'pop_back', why do we need
// the concept of a 'Stack', since the vector can handle everything?
// Answer: The creation of a vector can take extra time, as it may need
// to allocate new memory (a new block) for even a single element insertion.
// For example, if there are 4 elements in the vector and a 5th element needs to be inserted, 
// the vector will create a new block of memory of size 8, which can lead to memory wastage
// and takes extra time due to the reallocation process.
