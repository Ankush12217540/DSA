#include <iostream>
#include <stack>
using namespace std;

void reverseArrayUsingStack(int arr[], int size) {
    // Create a stack to hold the array elements
    stack<int> s;

    // Push all elements of the array onto the stack
    for (int i = 0; i < size; i++) {
        s.push(arr[i]);
    }

    // Pop the elements from the stack back into the array
    for (int i = 0; i < size; i++) {          // or, "while(!s.empty())"
        arr[i] = s.top();
        s.pop();
    }
}

int main() {
    // Example array
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Display the original array
    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Call the reverse function using stack
    reverseArrayUsingStack(arr, size);

    // Display the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
