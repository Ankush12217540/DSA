#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Fixed: Pass by reference to actually swap the values in the caller
void swap(string &a, string &b) {
    string temp = a;
    a = b;
    b = temp;
}

class ReverseString {
public:
    string reverseString(vector<string> &str) {
        int length = str.size();
        int start = 0, end = length - 1;

        while (start <= end) {
            swap(str[start], str[end]);
            start++;
            end--;
        }

        // Join vector of strings into a single string
        string result = "";
        for (const string &s : str) {
            result += s;
        }

        return result;
    }
};

int main() {
    ReverseString s;

    // Fixed: represent each character as a string element in the vector
    vector<string> b = {"a", "n", "k", "u", "s", "h"};

    cout << "Original string : ";
    for (const string &ch : b) cout << ch;
    cout << endl;

    string result = s.reverseString(b);

    cout << "Reversed string : " << result << endl;

    return 0;
}
