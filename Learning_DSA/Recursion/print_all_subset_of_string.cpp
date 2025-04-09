/*          print all the subset of the string 'abc'
""
"a"
"b"
"c"
"ab"
"ac"
"bc"
"abc"
*/

#include <iostream>
using namespace std;

void generateSubsets(string input, string output, int index) {
    if (index == input.length()) {
        cout << "\"" << output << "\"" << endl;
        return;
    }

    // Exclude current character
    generateSubsets(input, output, index + 1);

    // Include current character
    generateSubsets(input, output + input[index], index + 1);
}

int main() {
    string str = "abc";
    generateSubsets(str, "", 0);
    return 0;
}


/*                     EXPLANATION
Call: generateSubsets("abc", "", 0)
|
|-- Exclude 'a' → generateSubsets("abc", "", 1)
|   |
|   |-- Exclude 'b' → generateSubsets("abc", "", 2)
|   |   |
|   |   |-- Exclude 'c' → generateSubsets("abc", "", 3) → prints ""
|   |   |-- Include 'c' → generateSubsets("abc", "c", 3) → prints "c"
|   |
|   |-- Include 'b' → generateSubsets("abc", "b", 2)
|       |
|       |-- Exclude 'c' → generateSubsets("abc", "b", 3) → prints "b"
|       |-- Include 'c' → generateSubsets("abc", "bc", 3) → prints "bc"
|
|-- Include 'a' → generateSubsets("abc", "a", 1)
    |
    |-- Exclude 'b' → generateSubsets("abc", "a", 2)
    |   |
    |   |-- Exclude 'c' → generateSubsets("abc", "a", 3) → prints "a"
    |   |-- Include 'c' → generateSubsets("abc", "ac", 3) → prints "ac"
    |
    |-- Include 'b' → generateSubsets("abc", "ab", 2)
        |
        |-- Exclude 'c' → generateSubsets("abc", "ab", 3) → prints "ab"
        |-- Include 'c' → generateSubsets("abc", "abc", 3) → prints "abc"

    
*/