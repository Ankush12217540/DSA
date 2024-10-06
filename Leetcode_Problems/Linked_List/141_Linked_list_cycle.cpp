#include <iostream>
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (!head || !head->next) {
            return false;
        }
        
        ListNode *slow = head;
        ListNode *fast = head->next;
        
        while (slow != fast) {
            if (!fast || !fast->next) {
                return false;
            }
            slow = slow->next;
            fast = fast->next->next;
        }
        
        return true;
    }
};

// Helper function to create a cycle in the linked list (for testing purposes)
void createCycle(ListNode* head, int pos) {
    if (pos == -1) return;
    
    ListNode* tail = head;
    ListNode* cycleNode = nullptr;
    int index = 0;
    
    while (tail->next != nullptr) {
        if (index == pos) {
            cycleNode = tail;
        }
        tail = tail->next;
        index++;
    }
    
    // Creating the cycle
    tail->next = cycleNode;
}

int main() {
    // Creating a linked list: 3 -> 2 -> 0 -> -4 (cycle at pos 1)
    ListNode* head = new ListNode(3);
    head->next = new ListNode(2);
    head->next->next = new ListNode(0);
    head->next->next->next = new ListNode(-4);
    
    // Creating a cycle at position 1
    createCycle(head, 1);
    
    Solution solution;
    bool result = solution.hasCycle(head);
    
    if (result) {
        cout << "The linked list has a cycle." << endl;
    } else {
        cout << "The linked list does not have a cycle." << endl;
    }
    
    return 0;
}
