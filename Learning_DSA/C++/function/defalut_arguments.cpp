#include <iostream>
using namespace std;

// ==================== Function Declaration with Default Arguments ====================
// Syntax: return_type function_name(type param1 = default1, type param2 = default2...)

// Default values are set from right to left — not left to right
void greet(string name = "Guest", string title = "Mr./Ms.");
int add(int a, int b = 10);  // b has a default, a does not

// Invalid declaration (for explanation only)
// int subtract(int a = 5, int b); ❌ Error: default argument not at the end

// ==================== Main Function ====================
int main() {
    // ---------- Calling greet with both arguments ----------
    greet("Alice", "Dr.");

    // ---------- Calling greet with only one argument ----------
    greet("Bob");  // Uses default title

    // ---------- Calling greet with no arguments ----------
    greet();       // Uses both defaults

    // ---------- Using add function ----------
    int result1 = add(5, 7);    // Uses both provided values
    int result2 = add(5);       // Uses default for b
    cout << "Result1: " << result1 << endl;
    cout << "Result2 (using default b): " << result2 << endl;

    return 0;
}

// ==================== Function Definitions ====================

// Function with two default arguments
void greet(string name, string title) {
    cout << "Hello, " << title << " " << name << "!" << endl;
}

// Function with one default argument
int add(int a, int b) {
    return a + b;
}
