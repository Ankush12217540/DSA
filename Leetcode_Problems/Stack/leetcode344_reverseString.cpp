#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        stack<char> temp;

        // Push all characters of the vector into the stack
        for (int i = 0; i < s.size(); i++) {
            temp.push(s[i]);
        }

        // Pop characters from the stack and update the vector in reverse order
        int i = 0; 
        while (!temp.empty()) {
            s[i] = temp.top();
            temp.pop();
            i++;
        }

        // Alternatively, you could reverse using two pointers (commented out)
        // int st = 0;
        // int e = s.size() - 1;
        // while (st < e) {
        //     swap(s[st++], s[e--]);
        // }
    }
};

int main() {
    Solution solution;

    // Example string to reverse
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};

    // Output before reversing
    cout << "Original string: ";
    for (char c : s) {
        cout << c;
    }
    cout << endl;

    // Call the reverseString method
    solution.reverseString(s);

    // Output after reversing
    cout << "Reversed string: ";
    for (char c : s) {
        cout << c;
    }
    cout << endl;

    return 0;
}
