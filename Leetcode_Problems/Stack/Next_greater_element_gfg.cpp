#include <iostream>
#include <vector>
using namespace std;

vector<int> nextGreaterElement(const vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n, -1); // Initialize result vector with -1

    // Iterate through each element in the array
    for (int i = 0; i < n; i++) {
        // Check for the next greater element
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                result[i] = arr[j]; // Set the next greater element
                break; // Break once the next greater element is found
            }
        }
    }
    
    return result; // Return the result vector
}

int main() {
    // Sample input
    vector<int> arr = {4, 5, 2, 10, 8};

    // Get the next greater elements
    vector<int> result = nextGreaterElement(arr);

    // Print the result
    cout << "Next greater elements: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
