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
    q.display();

    return 0;
}
