#include <iostream>
using namespace std;

class Queue
{
private:
    int front, rear, size;
    int *arr;

public:
    Queue(int s)
    {
        front = rear = -1;
        size = s;
        arr = new int[size];
    }

    ~Queue()
    {
        delete[] arr;
    }

    bool isFull()
    {
        return (rear == size - 1);
    }

    bool isEmpty()
    {
        return (front == -1 || front > rear);
    }

    void enqueue(int value)
    { // (push)  Enqueue adds elements to the rear of the queue.
        if (isFull())
        {
            cout << "Queue is full. Cannot insert " << value << endl;
            return;
        }
        if (front == -1) // when empty
            front = 0;
        arr[++rear] = value;
        cout << value << " enqueued to the queue" << endl;
    }

    void dequeue()
    { // (pop) Dequeue removes elements from the front.
        if (isEmpty())
        {
            cout << "Queue is empty. Cannot dequeue" << endl;
            return;
        }
        else
        {
            if (front == rear)
            {
                front = rear = -1;
                cout << arr[front] << " dequeued from the queue" << endl;
            }
            else
            {
                cout << arr[front] << " dequeued from the queue" << endl;
                front++;
            }
        }
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    // Function to print the first element of the queue
    void printFront()
    {
        if (isEmpty())
        {
            cout << "Queue is empty. No front element." << endl;
            return;
        }
        cout << "Front element is: " << arr[front] << endl;
    }
};

int main()
{
    Queue q(7);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display();

    q.dequeue();
    q.display();

    q.enqueue(60); // This will show queue is full

    q.dequeue();
    q.dequeue();
    q.display();
    q.printFront();

    return 0;
}

//  problem with the above
/*
Wasted Space (Inefficient Memory Usage):
Simple Queue: Once the front pointer moves past the first
element due to dequeuing, the memory space used by dequeued
elements is effectively wasted and cannot be reused. For example,
if you enqueue 5 elements and dequeue 3, the remaining space at the
front of the array cannot be reused even if the queue has space left overall. */