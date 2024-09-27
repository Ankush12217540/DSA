#include <iostream>
#include <stack>
#include <algorithm> // for std::min
using namespace std;

// Function to push elements onto the stack while maintaining the minimum element at the top
stack<int> _push(int arr[], int n) {
    stack<int> st;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            st.push(arr[i]); // Push the first element
        } else {
            // Push the minimum of the current element and the top of the stack
            st.push(min(arr[i], st.top()));
        }
    }
    return st; // Return the stack with minimums
}

// Function to print the elements in the stack while popping them
void _getMinAtPop(stack<int> s) {
    while (!s.empty()) {
        cout << s.top() << " "; // Print the top element
        s.pop(); // Pop the element from the stack
    }
    cout << endl; // Print newline for better output format
}

int main() {
    // Sample input
    int arr[] = {3, 5, 2, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Push elements to the stack
    stack<int> st = _push(arr, n);

    // Print minimum values at each pop
    cout << "Minimum values at pop: ";
    _getMinAtPop(st);

    return 0;
}
