#include <iostream>
#include <string>
#include <algorithm> // for reverse, sort
using namespace std;

int main() {
    // 1. Initialization and Assignment
    string s1 = "hello";
    string s2("world");
    string s3 = s1;              // copy
    string s4(5, 'x');           // "xxxxx"
    cout << "1. Strings: " << s1 << ", " << s2 << ", " << s3 << ", " << s4 << endl;

    // 2. Basic Operations
    cout << "2. Length: " << s1.length() << endl;
    cout << "   Empty?: " << (s1.empty() ? "Yes" : "No") << endl;
    s4.clear();                  // clear contents of s4
    cout << "   Cleared s4: \"" << s4 << "\"\n";
    cout << "   First char: " << s1.front() << ", Last char: " << s1.back() << endl;

    // 3. Accessing Characters
    cout << "3. Access with []: " << s1[1] << ", with at(): " << s1.at(1) << endl;

    // 4. Modifying String
    string mod = "start";
    mod += " middle";           // append
    mod.append(" end");         // append again
    mod.push_back('!');
    mod.pop_back();             // removes '!'
    mod.insert(5, "-INSERTED-");
    mod.erase(5, 10);           // remove inserted text
    mod.replace(0, 5, "BEGIN"); // replace "start" with "BEGIN"
    cout << "4. Modified String: " << mod << endl;

    // 5. Substring and Searching
    string sub = "The quick brown fox jumps over the lazy dog";
    cout << "5. Substring (10, 5): " << sub.substr(10, 5) << endl;
    cout << "   Find 'fox': " << sub.find("fox") << endl;
    cout << "   Find first vowel: " << sub.find_first_of("aeiou") << endl;
    cout << "   Find last vowel: " << sub.find_last_of("aeiou") << endl;

    // 6. Comparison
    string cmp1 = "apple", cmp2 = "banana";
    cout << "6. Comparison: ";
    if (cmp1 == cmp2) cout << "Equal";
    else if (cmp1 < cmp2) cout << cmp1 << " < " << cmp2;
    else cout << cmp1 << " > " << cmp2;
    cout << endl;

    cout << "   Using compare(): " << cmp1.compare(cmp2) << endl;

    // 7. Conversion
    string numStr = "1234";
    int number = stoi(numStr);
    string converted = to_string(number + 10);
    cout << "7. Conversion: string -> int = " << number
         << ", int + 10 -> string = " << converted << endl;

    // 8. Iteration
    cout << "8. Iterating over string using range-based for:\n";
    for (char c : s1) cout << c << ' ';
    cout << "\nUsing index-based loop:\n";
    for (int i = 0; i < s1.length(); i++) cout << s1[i] << ' ';
    cout << endl;

    // 9. Case Conversion
    string mix = "GoLang";
    cout << "9. Case Conversion: ";
    for (char &c : mix) c = tolower(c);
    cout << "Lowercase = " << mix << ", ";
    for (char &c : mix) c = toupper(c);
    cout << "Uppercase = " << mix << endl;

    // 10. Other Useful Operations
    string ex = "stringexample";
    reverse(ex.begin(), ex.end());
    cout << "10. Reversed string: " << ex << endl;
    sort(ex.begin(), ex.end());
    cout << "    Sorted string: " << ex << endl;

    return 0;
}
