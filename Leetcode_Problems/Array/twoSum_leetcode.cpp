#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> num_map;
    
    // Iterate through the array
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        
        // If complement is found, return the indices
        if (num_map.find(complement) != num_map.end()) {
            return {num_map[complement], i};
        }
        
        // Otherwise, add the number and its index to the map
        num_map[nums[i]] = i;
    }
    
    // Return an empty vector if no solution is found (shouldn't happen per problem description)
    return {};
}

int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    
    vector<int> result = twoSum(nums, target);
    
    // Print the result
    if (!result.empty()) {
        cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;
    } else {
        cout << "No solution found!" << endl;
    }
    
    return 0;
}
