#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; // Pointer for the next position of non-val elements

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];  // Place the non-val element at the next position
                k++;                // Move pointer for the next position
            }
        }

        return k; // Return the number of elements not equal to val
    }
};

int main() {
    Solution solution;
    vector<int> nums = {3, 2, 2, 3, 4, 2}; // Test case
    int val = 3; // Value to remove

    int newLength = solution.removeElement(nums, val); // Get new length after removing `val`

    cout << "New length after removing element " << val << ": " << newLength << endl;
    cout << "Array after removing element: ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";  // Print the updated array
    }
    cout << endl;

    return 0;
}
