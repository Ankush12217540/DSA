#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;
    
    // Sort the array to apply two-pointer technique
    sort(nums.begin(), nums.end());

    // Iterate through the array
    for (int i = 0; i < nums.size(); i++) {
        // Skip duplicate elements to avoid redundant triplets
        if (i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }

        int left = i + 1;          // Start of the array after the current element
        int right = nums.size() - 1; // End of the array

        // Use two-pointer approach to find pairs that sum to -nums[i]
        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];
            
            if (sum == 0) {
                result.push_back({nums[i], nums[left], nums[right]});

                // Skip duplicates for left pointer
                while (left < right && nums[left] == nums[left + 1]) {
                    left++;
                }

                // Skip duplicates for right pointer
                while (left < right && nums[right] == nums[right - 1]) {
                    right--;
                }

                // Move both pointers after finding a valid triplet
                left++;
                right--;
            } else if (sum < 0) {
                left++; // Move left pointer to the right to increase the sum
            } else {
                right--; // Move right pointer to the left to decrease the sum
            }
        }
    }

    return result;
}

int main() {
    vector<int> nums = {-1, 0, 1, 2, -1, -4};

    vector<vector<int>> triplets = threeSum(nums);

    // Print the triplets
    for (const auto& triplet : triplets) {
        cout << "[";
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << "]\n";
    }

    return 0;
}
