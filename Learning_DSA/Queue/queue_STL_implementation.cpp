// Queue implementation using STL
#include <iostream>
#include <queue>  // Include the queue header
using namespace std;

int main() {
    // Declare a queue of integers
    queue<int> q;

    // Enqueue elements (push)
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    // Display the front element of the queue
    cout << "Front element: " << q.front() << endl;

    // Display the rear (last) element of the queue
    cout << "Rear element: " << q.back() << endl;

    // Dequeue an element (pop)
    q.pop();  // Removes the front element (10)
    cout << "After dequeue, front element: " << q.front() << endl;

    // Display all elements in the queue
    cout << "Queue elements: ";
    while (!q.empty()) {
        cout << q.front() << " ";  // Print front element
        q.pop();                   // Remove the front element
    }
    cout << endl;

    return 0;
}
