//link : https://www.geeksforgeeks.org/problems/string-manipulation3706/1
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    int removeConsecutiveSame(vector<string>& arr) {
        // Stack to store the strings
        stack<string> s;

        // Iterate over each string in the array
        for (int i = 0; i < arr.size(); i++) {
            // If the stack is empty, push the current string
            if (s.empty()) {
                s.push(arr[i]);
            }
            // If the top of the stack is the same as the current string, pop the top
            else if (arr[i] == s.top()) {
                s.pop();
            }
            // If they are different, push the current string onto the stack
            else {
                s.push(arr[i]);
            }
        }

        // Return the size of the stack (remaining elements after removal of consecutive same)
        return s.size();
    }
};

int main() {
    Solution solution;

    // Example vector of strings
    vector<string> arr = {"apple", "apple", "banana", "banana", "apple", "orange"};

    // Call the function and print the result
    int remaining = solution.removeConsecutiveSame(arr);

    cout << "Remaining number of strings after removing consecutive duplicates: " << remaining << endl;

    return 0;
}
