#include <iostream>
using namespace std;

// ==================== Function Declarations ====================
void passByValue(int a);          // Value passed, original not affected
void passByReference(int &a);     // Reference passed, original changed
void passByPointer(int *a);       // Address passed, original changed

// ==================== Main Function ====================
int main() {
    int x = 10;

    // ---------------- Actual vs Formal Parameters ----------------
    // x is the Actual Parameter - passed from here
    // 'a' in the function definition is the Formal Parameter - receives the value
    cout << "Original x = " << x << endl;

    // ---------------- Pass by Value ----------------
    passByValue(x);
    cout << "After passByValue, x = " << x << " (Unchanged because copy was used)" << endl;

    // ---------------- Pass by Reference ----------------
    passByReference(x);
    cout << "After passByReference, x = " << x << " (Changed because reference was used)" << endl;

    // Reset x to 10
    x = 10;

    // ---------------- Pass by Pointer ----------------
    passByPointer(&x);  // Pass address of x
    cout << "After passByPointer, x = " << x << " (Changed because pointer was used)" << endl;

    return 0;
}

// ==================== Function Definitions ====================

// ---------- Pass by Value ----------
// A copy of x is created in 'a'. Changes here don't affect the original.
void passByValue(int a) {
    a = a + 5;  // Only modifies local copy
    cout << "[Inside passByValue] Modified a = " << a << endl;
}

// ---------- Pass by Reference ----------
// 'a' is an alias to original variable x. Changes reflect back.
void passByReference(int &a) {
    a = a + 5;  // Directly modifies original x
    cout << "[Inside passByReference] Modified a = " << a << endl;
}

// ---------- Pass by Pointer ----------
// 'a' is a pointer to x, we dereference to access and change the value.
void passByPointer(int *a) {
    *a = *a + 5;  // Modifies value at the address (i.e., x)
    cout << "[Inside passByPointer] Modified *a = " << *a << endl;
}