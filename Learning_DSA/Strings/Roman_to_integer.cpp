// to convert ROMAN number to INTEGER , (leetcod #13)
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

// Define a class Solution with a method romanToInt
class Solution {
public:
    int romanToInt(string s) {
        // Step 1: Create a map of Roman numerals and their corresponding integer values
        unordered_map<char, int> T = {
            { 'I' , 1 },
            { 'V' , 5 },
            { 'X' , 10 },
            { 'L' , 50 },
            { 'C' , 100 },
            { 'D' , 500 },
            { 'M' , 1000 }
        };

        // Step 2: Initialize sum with the value of the last character in the string
        int sum = T[s.back()];

        // Step 3: Traverse the string from second last character to the beginning
        for (int i = s.length() - 2; i >= 0; --i) {
            // Step 4: If current value is less than the next one, subtract it (like IV = 4)
            if (T[s[i]] < T[s[i + 1]]) {
                sum -= T[s[i]];
            }
            // Step 5: Otherwise, add the value to the sum
            else {
                sum += T[s[i]];
            }
        }

        // Step 6: Return the final computed integer
        return sum;
    }
};

// Test the function with example inputs
int main() {
    Solution sol;
    string roman;
    cout << "Enter a Roman numeral: ";
    cin >> roman;

    int result = sol.romanToInt(roman);
    cout << "Integer value: " << result << endl;

    return 0;
}
