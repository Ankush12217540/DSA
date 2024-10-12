// Queue implementation using linke list
#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Queue class using a linked list
class Queue {
private:
    Node *front, *rear;

public:
    // Constructor
    Queue() {
        front = rear = nullptr;
    }

    // Destructor to clean up memory
    ~Queue() {
        while (front != nullptr) {
            Node* temp = front;
            front = front->next;
            delete temp;
        }
    }

    // Check if the queue is empty
    bool isEmpty() {
        return (front == nullptr);
    }

    // Enqueue: Add an element to the end of the queue
    void enqueue(int value) {
        Node* temp = new Node();
        temp->data = value;
        temp->next = nullptr;

        if (rear == nullptr) {
            // If the queue is empty, both front and rear point to the new node
            front = rear = temp;
        } else {
            // Add the new node at the rear and move the rear pointer
            rear->next = temp;
            rear = temp;
        }

        cout << value << " enqueued to the queue" << endl;
    }

    // Dequeue: Remove the front element from the queue
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue" << endl;
            return;
        }

        // Move front to the next node and delete the old front
        Node* temp = front;
        cout << front->data << " dequeued from the queue" << endl;
        front = front->next;

        // If the queue becomes empty after dequeue
        if (front == nullptr) {
            rear = nullptr;
        }

        delete temp;
    }

    // Display all the elements of the queue
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Queue elements: ";
        Node* temp = front;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Print the front element of the queue
    void printFront() {
        if (isEmpty()) {
            cout << "Queue is empty. No front element." << endl;
            return;
        }
        cout << "Front element is: " << front->data << endl;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display();

    q.printFront();  // Print the front element

    q.dequeue();
    q.display();
    q.printFront();  // Print the front element after dequeuing

    q.enqueue(60);   // Add a new element after dequeueing
    q.display();

    return 0;
}
