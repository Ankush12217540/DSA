#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(NULL) {}
};

class LinkedList {
public:
    Node* head;

    LinkedList() : head(NULL) {}

    void insertAtPosition(int data, int position) {
        Node* newNode = new Node(data);

        // If the list is empty or the position is 0, insert at the head
        if (position == 0 || head == NULL) {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node* current = head;
        Node* previous = NULL;
        int currentPosition = 0;

        // Traverse the list to find the position
        while (current != NULL && currentPosition < position) {
            previous = current;
            current = current->next;
            currentPosition++;
        }

        // Insert the new node at the found position
        newNode->next = current;
        if (previous != NULL) {
            previous->next = newNode;
        }
    }

    void display() {
        Node* current = head;
        while (current != NULL) {
            cout << current->data << " -> ";
            current = current->next;
        }
        cout << "NULL" << endl;
    }
};

int main() {
    LinkedList list;
    
    // Inserting nodes at specific positions
    list.insertAtPosition(10, 0); // Insert 10 at position 0
    list.insertAtPosition(20, 1); // Insert 20 at position 1
    list.insertAtPosition(30, 1); // Insert 30 at position 1 (between 10 and 20)
    list.insertAtPosition(40, 2); // Insert 40 at position 2 (between 30 and 20)
    list.insertAtPosition(50, 4); // Insert 50 at position 4 (end of the list)

    list.display(); // Output: 10 -> 30 -> 40 -> 20 -> 50 -> NULL

    return 0;
}
