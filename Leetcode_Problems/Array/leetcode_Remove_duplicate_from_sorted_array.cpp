#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) return 0; // Return 0 if the array is empty

        int uniqueIndex = 0; // Track unique elements

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] != nums[uniqueIndex]) {
                uniqueIndex++;               // Move the index forward
                nums[uniqueIndex] = nums[i];  // Place the unique element at the new position
            }
        }

        return uniqueIndex + 1; // Return the new length of the array
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5}; // Test case

    int newLength = solution.removeDuplicates(nums); // Get new length after removing duplicates

    cout << "New length after removing duplicates: " << newLength << endl;
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newLength; i++) {
        cout << nums[i] << " ";  // Print the updated array
    }
    cout << endl;

    return 0;
}
