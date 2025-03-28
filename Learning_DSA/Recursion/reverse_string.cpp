
#include <iostream>
using namespace std;

void reverseString(string &str, int start, int end) {
    if (start >= end) 
        return; // Base case: stop when pointers cross

    swap(str[start], str[end]); // Swap characters
    reverseString(str, start + 1, end - 1); // Recursive call
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    reverseString(str, 0, str.length() - 1);
    cout << "Reversed string: " << str << endl;

    return 0;
}
