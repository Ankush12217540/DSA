#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    vector<int> bracketNumbers(string str) {
        // Vector to store bracket numbers
        vector<int> vec;
        // Stack to hold the current bracket number
        stack<int> st;
        // Counter for the current bracket number
        int count = 0;

        // Iterate through each character in the string
        for (char c : str) {
            if (c == '(') {
                // Increment counter for opening bracket
                count++;
                st.push(count); // Push the current count onto the stack
                vec.push_back(count); // Add the count to the result vector
            } 
            else if (c == ')') {
                // For closing brackets, add the top of the stack to the result
                vec.push_back(st.top());
                st.pop(); // Remove the corresponding opening bracket number
            }
        }
        return vec; // Return the vector containing bracket numbers
    }
};

int main() {
    Solution solution;

    // Test case
    string str = "((()))";
    vector<int> result = solution.bracketNumbers(str);

    // Print the result
    cout << "Bracket numbers for the string \"" << str << "\": ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
