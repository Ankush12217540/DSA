#include <vector>
using namespace std;

vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();
    
    // Start from the last digit and work backwards
    for (int i = n - 1; i >= 0; --i) {
        if (digits[i] < 9) {
            digits[i] += 1;
            return digits; // No carry, return the updated digits
        }
        // If the digit is 9, it becomes 0 and we carry over
        digits[i] = 0;
    }
    
    // If we exit the loop, we had a carry from the most significant digit
    digits.insert(digits.begin(), 1); // Insert 1 at the beginning
    return digits;
}

// Example usage
#include <iostream>

int main() {
    vector<int> digits1 = {1, 2, 3};
    vector<int> result1 = plusOne(digits1);
    for (int num : result1) {
        cout << num << " ";
    }
    cout << endl; // Output: 1 2 4

    vector<int> digits2 = {4, 3, 2, 1};
    vector<int> result2 = plusOne(digits2);
    for (int num : result2) {
        cout << num << " ";
    }
    cout << endl; // Output: 4 3 2 2

    vector<int> digits3 = {9};
    vector<int> result3 = plusOne(digits3);
    for (int num : result3) {
        cout << num << " ";
    }
    cout << endl; // Output: 1 0

    return 0;
}
