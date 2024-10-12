// circular Queue implemenation using array
#include <iostream>
using namespace std;

class CircularQueue {
private:
    int front, rear, size;
    int* arr;

public:
    CircularQueue(int s) {
        front = rear = -1;
        size = s;
        arr = new int[size];
    }

    ~CircularQueue() {
        delete[] arr;
    }

    bool isFull() {
        return ((rear + 1) % size == front);
    }

    bool isEmpty() {
        return (front == -1);
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full. Cannot insert " << value << endl;
            return;
        }
        if (isEmpty()) {
            front = rear = 0;  // First element to be enqueued
        } else {
            rear = (rear + 1) % size;  // Wrap around if necessary
        }
        arr[rear] = value;
        cout << value << " enqueued to the queue" << endl;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue" << endl;
            return;
        }
        cout << arr[front] << " dequeued from the queue" << endl;

        if (front == rear) {
            // If there is only one element left, reset the queue
            front = rear = -1;
        } else {
            front = (front + 1) % size;  // Move the front forward, wrapping around if necessary
        }
    }

    void display() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue elements: ";
        int i = front;
        while (true) {
            cout << arr[i] << " ";
            if (i == rear)
                break;
            i = (i + 1) % size;  // Move forward, wrapping around if necessary
        }
        cout << endl;
    }

    // Function to print the first element of the queue
    void printFront() {
        if (isEmpty()) {
            cout << "Queue is empty. No front element." << endl;
            return;
        }
        cout << "Front element is: " << arr[front] << endl;
    }
};

int main() {
    CircularQueue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);  // This will fill the queue

    q.display();

    q.printFront();  // Print the front element

    q.dequeue();
    q.display();
    q.printFront();  // Print the front element after dequeuing

    q.enqueue(60);  // This will wrap around and add to the queue
    q.display();

    return 0;
}
