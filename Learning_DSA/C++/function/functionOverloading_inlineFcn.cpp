#include <iostream>
using namespace std;

// ==================== 4. Function Overloading ====================
// Same function name, but different parameter **type or number**
// This is resolved by compiler at compile-time => **Compile-time Polymorphism**

void display();                        // No parameter
void display(int x);                  // One int parameter
void display(string name);            // One string parameter
void display(int x, int y);           // Two int parameters

// ==================== 5. Inline Function ====================
// Suggested to the compiler for **inlining** small functions

inline int square(int n) {
    // Small function → ideal for inline
    return n * n;
}

// Can also use default inline behavior like this:
inline void printHello() {
    cout << "Hello (inline)!" << endl;
}

// ==================== Main Function ====================
int main() {

    // -------- Function Overloading in Action --------
    display();                 // Matches display()
    display(10);              // Matches display(int)
    display("Alice");         // Matches display(string)
    display(3, 4);            // Matches display(int, int)

    // -------- Inline Functions --------
    int val = 5;
    cout << "Square of " << val << " is: " << square(val) << endl;
    printHello();

    return 0;
}

// ==================== Overloaded Function Definitions ====================
void display() {
    cout << "No arguments passed." << endl;
}

void display(int x) {
    cout << "Integer passed: " << x << endl;
}

void display(string name) {
    cout << "String passed: " << name << endl;
}

void display(int x, int y) {
    cout << "Two integers: " << x << " and " << y << endl;
}
