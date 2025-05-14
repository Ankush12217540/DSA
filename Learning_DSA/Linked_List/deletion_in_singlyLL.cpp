#include <iostream>

using namespace std;

// Define the Node structure
class Node {
public:
    int data;
    Node* next;

    Node(int value) : data(value), next(NULL) {}
};

// Function to delete a node at a specific position
void deleteAtPosition(Node*& head, int position) {
    // Check if the list is empty or position is invalid
    if (head == NULL || position < 0) {
        cout << "Invalid position or empty list." << endl;
        return;
    }
    cout<<"The addrss of the variable head is : "<<&head<<endl;
    cout<<"The address of the value of the variable head is : "<<head<<endl;
    Node* temp = head;   // the address of content inside head pointer is copied to the value of temp pointer
    // to be precise, The above line of code initializes the temp pointer to point to the same location as head. This means temp now points to the same node that head points to.
    cout<<"The address of the value of temp: "<<temp<<endl;
    cout<<"The address of the variable temp "<<&temp<<endl;
    

    // If the head needs to be removed
    if (position == 0) {
        head = temp->next; // Change head
        delete temp; // Free memory
        return;
        
    }

    // Find the previous node of the node to be deleted
    Node* previous = NULL;
    int currentPosition = 0;
    while (temp != NULL && currentPosition < position) {
        previous = temp;
        temp = temp->next;
        currentPosition++;
    }

    // If the position is more than the number of nodes
    if (temp == NULL) {
        cout << "Position exceeds list length." << endl;
        return;
    }

    // Unlink the node from the linked list
    previous->next = temp->next;
    delete temp; // Free memory
}

// Function to display the linked list
void display(Node* head) {
    Node* current = head;
    while (current != NULL) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}

int main() {
    // Create a simple linked list: 10 -> 20 -> 30 -> 40 -> 50
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head->next->next->next->next = new Node(50);

    cout << "Original list: ";
    display(head);

    // Delete node at position 2 (30 in this case)
    deleteAtPosition(head, 2);

    cout << "List after deleting node at position 2: ";
    display(head);

    // Cleanup remaining nodes
    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}