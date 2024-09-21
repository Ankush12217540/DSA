// InsertAtBottom  in stack using Recursion

#include <iostream>
#include <stack>
using namespace std;

// Function to insert an element at the bottom of the stack
void insertAtBottom(stack<int> &st, int element) {
    // Base case: If the stack is empty, push the element
    if (st.empty()) {
        st.push(element);
        return;
    }

    // Step 1: Pop the top element and hold it in a temporary variable
    int topElement = st.top();
    st.pop();

    // Step 2: Recursively call insertAtBottom to insert 'element' at the bottom
    insertAtBottom(st, element);

    // Step 3: Push the popped element back on the stack
    st.push(topElement);
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

    // Insert an element at the bottom
    insertAtBottom(st, 0);

    cout << "Stack after inserting 0 at the bottom: ";
    printStack(st);  // Output: 4 3 2 1 0

    return 0;
}
