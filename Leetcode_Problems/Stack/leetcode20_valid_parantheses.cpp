#include <iostream>
#include <stack>
#include <unordered_map>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        // Map to store corresponding pairs of parentheses
        unordered_map<char, char> matchingBrackets = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };

        // Stack to store opening parentheses
        stack<char> st;

        for (char c : s) {
            // If current character is a closing bracket
            if (matchingBrackets.count(c)) {
                // Check if stack is non-empty and the top element matches the corresponding opening bracket
                if (!st.empty() && st.top() == matchingBrackets[c]) {
                    st.pop();
                } else {
                    return false;
                    
                }
            } 
            // If it's an opening bracket, push it to the stack
            else {
                st.push(c);
            }
        }

        // If the stack is empty, all opening brackets have been matched and closed
        return st.empty();
    }
};

int main() {
    Solution solution;

    // Example strings
    string s1 = "()[]{}";
    string s2 = "(]";
    string s3 = "([)]";
    string s4 = "{[]}";

    // Check for valid parentheses
    cout << boolalpha;  // To print true/false instead of 1/0
    cout << "Is \"" << s1 << "\" valid? " << solution.isValid(s1) << endl;
    cout << "Is \"" << s2 << "\" valid? " << solution.isValid(s2) << endl;
    cout << "Is \"" << s3 << "\" valid? " << solution.isValid(s3) << endl;
    cout << "Is \"" << s4 << "\" valid? " << solution.isValid(s4) << endl;

    return 0;
}
