/

/*To insert an element at the bottom of a stack without using recursion,
  we can use an auxiliary stack to temporarily store the elements as we pop 
 them from the original stack. After inserting the new element at the bottom, 
we push the temporarily stored elements back into the original stack.*/

#include <iostream>
#include <stack>
using namespace std;

// Function to insert an element at the bottom of the stack without recursion
void insertAtBottomWithoutRecursion(stack<int> &st, int element) {
    // Create a temporary stack to hold the elements
    stack<int> tempStack;

    // Step 1: Pop all elements from the original stack and push them into the tempStack
    while (!st.empty()) {
        tempStack.push(st.top());
        st.pop();
    }

    // Step 2: Push the new element to the original stack (now it's at the bottom)
    st.push(element);

    // Step 3: Push all elements from tempStack back to the original stack
    while (!tempStack.empty()) {
        st.push(tempStack.top());
        tempStack.pop();
    }
}

// Helper function to print the stack
void printStack(stack<int> st) {
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main() {
    stack<int> st;

    // Push some elements into the stack
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);

    cout << "Original stack: ";
    printStack(st);  // Output: 4 3 2 1

    // Insert an element at the bottom without recursion
    insertAtBottomWithoutRecursion(st, 0);
     insertAtBottomWithoutRecursion(st, -1);
      insertAtBottomWithoutRecursion(st, -2);
    cout << "Stack after inserting 0 at the bottom: ";
    printStack(st);  // Output: 4 3 2 1 0

    // to check which element is at the top
    cout<<"Top element of the stack is: " <<st.top();
    return 0;
}


                                                                   // comcept underlying
// use of &(ampersand) 
/*
The stack<int> &st means that the stack st is passed by reference,
 allowing the function to modify the original stack that was passed
  to it. Any changes made to st inside the function will reflect in
   the original stack outside the function.
*/


// Difference between passing by value and passing by reference
/*

Pass by Value:
A copy of the variable is passed to the function.
Modifying the variable inside the function does not affect the original variable outside the function.

Pass by Reference:
A reference (alias) to the original variable is passed to the function.
Modifying the variable inside the function does affect the original variable.
*/
