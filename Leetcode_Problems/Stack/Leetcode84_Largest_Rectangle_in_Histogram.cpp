#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        vector<int> right(n), left(n);
        stack<int> st;

        // Finding the next smaller element to the right
        for (int i = n - 1; i >= 0; --i) {
            while (!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }
            right[i] = (st.empty()) ? n : st.top();
            st.push(i);
        }

        // Clear the stack for next calculation
        while (!st.empty()) st.pop();

        // Finding the next smaller element to the left
        for (int i = 0; i < n; ++i) {
            while (!st.empty() && heights[st.top()] >= heights[i]) {
                st.pop();
            }
            left[i] = (st.empty()) ? -1 : st.top();
            st.push(i);
        }

        // Calculate the largest rectangle area
        int maxArea = 0;
        for (int i = 0; i < n; ++i) {
            int width = right[i] - left[i] - 1;
            int area = heights[i] * width;
            maxArea = max(maxArea, area);
        }

        return maxArea;
    }
};

// Main function to test the largestRectangleArea function
int main() {
    Solution sol;
    
    // Example 1
    vector<int> heights1 = {2, 1, 5, 6, 2, 3};
    cout << "Largest Rectangle Area in Histogram 1: " << sol.largestRectangleArea(heights1) << endl;

    // Example 2
    vector<int> heights2 = {2, 4};
    cout << "Largest Rectangle Area in Histogram 2: " << sol.largestRectangleArea(heights2) << endl;

    return 0;
}
