#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;
    Node(int value) {
        data = value;
        next = nullptr;  // Properly initialize to nullptr
    }
};

int main() {
    Node *Head = nullptr;  // Initialize pointers to nullptr
    Node *Tail = nullptr;

    cout << "Code started" << endl;
    
    // Arrays to insert at the head and tail
    int arrHead[] = {5, 4, 3, 2, 1};
    int arrTail[] = {6, 7, 8, 9};

    // Insert elements from arrHead
    for (int i = 0; i < 5; i++) {
        Node *newNode = new Node(arrHead[i]);
        newNode->next = Head;
        Head = newNode;
        if (Tail == nullptr) {
            Tail = Head;  // Set Tail to the same as Head if it's the first node
        }
    }

    // Insert elements from arrTail at the end
    for (int i = 0; i < 4; i++) {
        Node *newNode = new Node(arrTail[i]);
        if (Tail != nullptr) {
            Tail->next = newNode;
            Tail = newNode;
        }
    }

    // Print the linked list from head to tail
    Node *start = Head;
    while (start != nullptr) {
        cout << start->data << " ";
        start = start->next;
    }
    cout << endl;

    cout << "Code ended" << endl;

    // Free allocated memory (clean-up)
    while (Head != nullptr) {
        Node *temp = Head;
        Head = Head->next;
        delete temp;
    }

    return 0;
}
