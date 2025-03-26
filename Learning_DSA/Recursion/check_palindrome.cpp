#include <iostream>
using namespace std;

bool isPalindrome(string &str, int start, int end) {
    if (start >= end) 
        return true; // Base case: If pointers have crossed, it's a palindrome

    if (str[start] != str[end]) 
        return false; // Mismatch found, not a palindrome

    return isPalindrome(str, start + 1, end - 1); // Recursive call
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (isPalindrome(str, 0, str.length() - 1))
        cout << "Palindrome" << endl;
    else
        cout << "Not a palindrome" << endl;

    return 0;
}