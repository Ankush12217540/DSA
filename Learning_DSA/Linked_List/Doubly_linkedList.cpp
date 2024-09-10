#include <iostream>

class DoublyLinkedList {
private:
    struct Node {
        int data;
        Node* next;
        Node* prev;

        Node(int val) : data(val), next(nullptr), prev(nullptr) {}
    };

    Node* head;
    Node* tail;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    // Insert a new node at the front of the list
    void insertFront(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    // Insert a new node at the end of the list
    void insertEnd(int value) {
        Node* newNode = new Node(value);
        if (tail == nullptr) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    // Delete a node with a specific value
    void deleteNode(int value) {
        Node* current = head;
        while (current != nullptr && current->data != value) {
            current = current->next;
        }
        if (current == nullptr) return; // Node with value not found

        if (current == head) {
            head = head->next;
            if (head != nullptr) head->prev = nullptr;
        } else if (current == tail) {
            tail = tail->prev;
            if (tail != nullptr) tail->next = nullptr;
        } else {
            current->prev->next = current->next;
            current->next->prev = current->prev;
        }
        delete current;
    }

    // Traverse the list forward
    void traverseForward() const {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    // Traverse the list backward
    void traverseBackward() const {
        Node* current = tail;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->prev;
        }
        std::cout << std::endl;
    }

    ~DoublyLinkedList() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    DoublyLinkedList dll;

    dll.insertFront(10);
    dll.insertEnd(20);
    dll.insertFront(5);
    dll.insertEnd(30);

    std::cout << "Forward traversal: ";
    dll.traverseForward();

    std::cout << "Backward traversal: ";
    dll.traverseBackward();

    dll.deleteNode(20);
    std::cout << "After deleting 20, forward traversal: ";
    dll.traverseForward();

    dll.deleteNode(5);
    std::cout << "After deleting 5, forward traversal: ";
    dll.traverseForward();

    return 0;
}
