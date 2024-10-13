#include <iostream>
#include <queue>
#include <stack>

using namespace std;

// Function to reverse the queue
void reverseQueue(queue<int>& q) {
    stack<int> s;

    // Push all elements of the queue onto the stack
    while (!q.empty()) {
        s.push(q.front());
        q.pop();
    }

    // Pop all elements from the stack and push them back to the queue
    while (!s.empty()) {
        q.push(s.top());
        s.pop();
    }
}

// Function to print the queue
void printQueue(queue<int> q) {
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main() {
    queue<int> q;

    // Adding elements to the queue
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout << "Original Queue: ";
    printQueue(q);

    // Reverse the queue
    reverseQueue(q);

    cout << "Reversed Queue: ";
    printQueue(q);

    return 0;
}
