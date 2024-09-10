#include <iostream>

class CircularLinkedList {
private:
    struct Node {
        int data;
        Node* next;

        Node(int val) : data(val), next(nullptr) {}
    };

    Node* head;

public:
    CircularLinkedList() : head(nullptr) {}

    // Insert a new node at the front of the list
    void insertFront(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            newNode->next = head;
        } else {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            newNode->next = head;
            temp->next = newNode;
            head = newNode;
        }
    }

    // Insert a new node at the end of the list
    void insertEnd(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            newNode->next = head;
        } else {
            Node* temp = head;
            while (temp->next != head) {
                temp = temp->next;
            }
            temp->next = newNode;
            newNode->next = head;
        }
    }

    // Delete a node with a specific value
    void deleteNode(int value) {
        if (head == nullptr) return;

        Node* current = head;
        Node* previous = nullptr;

        // Check if the node to be deleted is the head
        do {
            if (current->data == value) {
                if (previous == nullptr) {
                    Node* temp = head;
                    while (temp->next != head) {
                        temp = temp->next;
                    }
                    if (head == head->next) {
                        delete head;
                        head = nullptr;
                    } else {
                        temp->next = head->next;
                        delete head;
                        head = temp->next;
                    }
                } else {
                    previous->next = current->next;
                    delete current;
                }
                return;
            }
            previous = current;
            current = current->next;
        } while (current != head);
    }

    // Traverse the list
    void traverse() const {
        if (head == nullptr) return;

        Node* current = head;
        do {
            std::cout << current->data << " ";
            current = current->next;
        } while (current != head);
        std::cout << std::endl;
    }

    ~CircularLinkedList() {
        if (head == nullptr) return;

        Node* current = head;
        do {
            Node* temp = current;
            current = current->next;
            delete temp;
        } while (current != head);

        head = nullptr;
    }
};

int main() {
    CircularLinkedList cll;

    cll.insertFront(10);
    cll.insertEnd(20);
    cll.insertFront(5);
    cll.insertEnd(30);

    std::cout << "Circular linked list traversal: ";
    cll.traverse();

    cll.deleteNode(20);
    std::cout << "After deleting 20: ";
    cll.traverse();

    cll.deleteNode(5);
    std::cout << "After deleting 5: ";
    cll.traverse();

    return 0;
}
