#include <iostream>
using namespace std;

// ==================== 1. Function Declaration (Prototype) ====================
// Declaring functions before using them in main
void sayHello();                      // No return, no parameter
int add(int a, int b);               // Returns int, takes 2 int parameters
void greetUser(string name);         // Takes a string, returns nothing
float divide(float x, float y);      // Returns float

// ==================== Main Function ====================
int main() {
    // Function Call: Call sayHello
    sayHello();

    // Calling add function with parameters
    int result = add(5, 3);
    cout << "Sum: " << result << endl;

    // Calling greetUser with string parameter
    greetUser("Alice");

    // Call divide and store the result
    float division = divide(10.0, 2.0);
    cout << "Division result: " << division << endl;

    return 0;
}

// ==================== 2. Function Definitions ====================

// Syntax:
// return_type function_name(parameter_list) {
//     // function body
// }

// -------------------- void function (no return) --------------------
void sayHello() {
    cout << "Hello! Welcome to the basics of functions in C++!" << endl;
}

// -------------------- int return type function --------------------
int add(int a, int b) {
    return a + b;  // returns the sum of a and b
}

// -------------------- void function with parameter --------------------
void greetUser(string name) {
    cout << "Hello, " << name << "! Nice to meet you!" << endl;
}

// -------------------- float return type function --------------------
float divide(float x, float y) {
    // Basic error check
    if (y == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0.0;
    }
    return x / y;
}


/*
✅ Concepts Covered:
Function Declaration (Prototype): Before main(), we declare the function signatures.

Function Definition: Actual function bodies written after main() or before — C++ allows both.

Function Call: Functions are used inside main() by calling them with appropriate parameters.

Syntax and Structure: All standard function parts are shown clearly.

Return Types: Examples include void, int, and float.

Let me know if you'd like to proceed to the next topic like parameters, overloading, recursion, etc.
*/