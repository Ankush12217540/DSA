#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

int main()
{
    Node *Head;
    Node *Tail;
    Head = Head = NULL;

    int arr[] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i < 5; i++)
    {
        if (Head == NULL)
        {
            Head = new Node(arr[i]);
            Tail = Head;
        }
        else
        {
            Tail->next = new Node(arr[i]);
            Tail = Tail->next;
        }
    }

    Node *temp;
    temp = Head;
    while (temp)
    {
        cout << temp->data << " " << endl;
        temp = temp->next;
    }

    // taking the varible for the memory referece to the middle of the linked list
    Node *mid = Head;

    // now adding the data to the head of the linked list from the array
    int arr2[] = {-1, -2, -3, -4, -5, -6};
    for (int i = 0; i < 6; i++)
    {
        Node *middle;
        middle = new Node(arr2[i]);
        middle->next = mid;
        mid = middle;
    }
    // printing from head to the middle pointer
    while (mid->next!=Head->next)
    {
        cout << mid->data << " " << endl;
        mid = mid->next;
    }
}