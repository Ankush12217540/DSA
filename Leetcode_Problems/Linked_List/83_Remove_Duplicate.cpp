#include<iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// Solution class
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }

        ListNode* current = head;
        while (current->next != nullptr) {
            if (current->val == current->next->val) {
                ListNode* temp = current->next;
                current->next = current->next->next;
                delete temp;
            } else {
                current = current->next;
            }
        }
        return head;
    }
};

// Utility function to insert a node at the end of the linked list
ListNode* insertNode(ListNode* head, int val) {
    if (head == nullptr) {
        return new ListNode(val);
    }
    ListNode* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = new ListNode(val);
    return head;
}

// Utility function to print the linked list
void printList(ListNode* head) {
    ListNode* temp = head;
    while (temp != nullptr) {
        cout << temp->val;
        if (temp->next != nullptr) {
            cout << " -> ";
        }
        temp = temp->next;
    }
    cout << endl;
}

// Main function to test the solution
int main() {
    Solution solution;
    ListNode* head = nullptr;

    // Insert nodes to create the sorted linked list: 1 -> 1 -> 2 -> 3 -> 3
    head = insertNode(head, 1);
    head = insertNode(head, 1);
    head = insertNode(head, 2);
    head = insertNode(head, 3);
    head = insertNode(head, 3);

    cout << "Original list: ";
    printList(head);

    // Remove duplicates
    head = solution.deleteDuplicates(head);

    cout << "List after removing duplicates: ";
    printList(head);

    return 0;
}
