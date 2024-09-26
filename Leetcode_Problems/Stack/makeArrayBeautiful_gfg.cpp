#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    vector<int> makeBeautiful(vector<int> arr) {
        // Stack to store the processed elements
        stack<int> temp;

        // Iterate over each element in the array
        for (int i = 0; i < arr.size(); i++) {
            if (temp.empty()) {
                // Push the first element into the stack if it's empty
                temp.push(arr[i]);
            } else if (arr[i] >= 0) {
                // If the current element is positive
                if (temp.top() >= 0) {
                    temp.push(arr[i]);  // Push if the top element is also positive
                } else {
                    temp.pop();  // Pop if the top element is negative (cancel out)
                }
            } else {
                // If the current element is negative
                if (temp.top() < 0) {
                    temp.push(arr[i]);  // Push if the top element is also negative
                } else {
                    temp.pop();  // Pop if the top element is positive (cancel out)
                }
            }
        }

        // Transfer stack contents into a vector in the correct order
        vector<int> ans(temp.size());
        int i = temp.size() - 1;
        while (!temp.empty()) {
            ans[i] = temp.top();  // Fill the vector from the back
            i--;
            temp.pop();
        }

        return ans;
    }
};

int main() {
    Solution solution;

    // Example array to make beautiful
    vector<int> arr = {4, 2, -3, -1, 6, -2, -4};

    // Call the makeBeautiful function
    vector<int> result = solution.makeBeautiful(arr);

    // Output the result
    cout << "Array after making it beautiful: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
