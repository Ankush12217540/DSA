#include <iostream>
using namespace std;

void generateSubsets(string s, string curr, int index) {
    if (index == s.length()) {
        cout << "\"" << curr << "\", ";
        return;
    }
    generateSubsets(s, curr, index + 1);  // Exclude current character
    generateSubsets(s, curr + s[index], index + 1);  // Include current character
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    cout << "Subsets: ";
    generateSubsets(str, "", 0);
    cout << endl;
    return 0;
}
