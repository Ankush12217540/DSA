#include <iostream>
using namespace std;

// ==================== Recursive Function to Calculate Factorial ====================
int factorial(int n)
{
    // ✅ Base Case: Stop when n == 0 or n == 1
    if (n <= 1)
        return 1;

    // ✅ Recursive Case: Function calls itself with n-1
    return n * factorial(n - 1);
}

// ==================== Recursive Function to Calculate Fibonacci ====================
int fibonacci(int n)
{
    // ✅ Base Cases
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    // ✅ Recursive Case
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// ==================== Helper Function to Understand Stack Behavior ====================
void printDescending(int n)
{
    // Base case
    if (n == 0)
    {
        cout << "Reached base case, n = 0" << endl;
        return;
    }

    // Print before the recursive call
    cout << "Before: n = " << n << endl;

    // Recursive call
    printDescending(n - 1);

    // Print after the recursive call
    cout << "After: n = " << n << endl;
}

// ==================== Main Function ====================
int main()
{
    // -------- Factorial Example --------
    int num = 5;
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;

    // -------- Fibonacci Example --------
    int fibIndex = 6;
    cout << "Fibonacci at index " << fibIndex << " is: " << fibonacci(fibIndex) << endl;

    // -------- Stack Behavior Demo --------
    cout << "\nDemonstrating stack behavior:\n";
    printDescending(3);

    return 0;
}
