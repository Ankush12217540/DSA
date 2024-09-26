#include <iostream>
#include <stack>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1, t1;

        // Process string s
        for (char c : s) {
            if (c == '#') {
                if (!s1.empty()) {
                    s1.pop(); // Remove the last character if backspace is found
                }
            } else {
                s1.push(c); // Push valid character
            }
        }

        // Process string t
        for (char c : t) {
            if (c == '#') {
                if (!t1.empty()) {
                    t1.pop(); // Remove the last character if backspace is found
                }
            } else {
                t1.push(c); // Push valid character
            }
        }

        // Compare the stacks
        return s1 == t1; // Return true if both stacks are equal
    }
};

int main() {
    Solution solution;
    cout << boolalpha; // To print true/false instead of 1/0

    // Test cases
    cout << "s = \"ab#c\", t = \"ad#c\" : " << solution.backspaceCompare("ab#c", "ad#c") << endl; // Output: true
    cout << "s = \"ab##\", t = \"c#d#\" : " << solution.backspaceCompare("ab##", "c#d#") << endl; // Output: true
    cout << "s = \"a#c\", t = \"b\" : " << solution.backspaceCompare("a#c", "b") << endl; // Output: false
    cout << "s = \"x#y#z#\", t = \"\" : " << solution.backspaceCompare("x#y#z#", "") << endl; // Output: true

    return 0;
}
