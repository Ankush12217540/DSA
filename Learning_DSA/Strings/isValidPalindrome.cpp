#include <iostream>
#include <string>
#include <cctype> // for isalnum and tolower
using namespace std;

// Function to check if a string is a valid palindrome
bool isPalindrome(string s) {
    int left = 0, right = s.length() - 1;

    while (left < right) {
        // Skip non-alphanumeric characters
        while (left < right && !isalnum(s[left])) left++;
        while (left < right && !isalnum(s[right])) right--;

        // Compare characters ignoring case
        if (tolower(s[left]) != tolower(s[right])) {
            return false;
        }

        left++;
        right--;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter number of test cases: ";
    cin >> n;
    cin.ignore(); // To ignore the newline after integer input

    for (int i = 1; i <= n; ++i) {
        string input;
        cout << "Enter string " << i << ": ";
        getline(cin, input);

        if (isPalindrome(input)) {
            cout << "Result: Valid Palindrome " << endl;
        } else {
            cout << "Result: Not a Palindrome " << endl;
        }
    }

    return 0;
}
