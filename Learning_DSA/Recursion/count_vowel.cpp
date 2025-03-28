#include <iostream>
using namespace std;

int countVowel(string str, int index) {
    if (index == -1) {
        return 0; // Base case: No more characters left
    }

    char ch = tolower(str[index]); // Convert to lowercase to handle uppercase letters
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')  
        return 1 + countVowel(str, index - 1);
    
    return countVowel(str, index - 1); // Ensure the function returns in all cases
}

int main() {
    string name = "ankush";
    cout << "Number of vowels in the word " << name << " is: " << countVowel(name, name.length() - 1) << endl;
    return 0;
}
