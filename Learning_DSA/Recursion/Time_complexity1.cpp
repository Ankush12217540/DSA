#include <iostream>
using namespace std;

/* 
Factorial function using recursion.
Time Complexity: O(n) 
- The function calls itself n times before reaching the base case.
*/

int factorial(int n) {
    if (n == 0 || n == 1)  // Base case
        return 1;
    
    return n * factorial(n - 1); // Recursive case
}

int main() {
    int num = 5;
    cout << "Factorial of " << num << " is " << factorial(num) << endl;
    return 0;
}

/*
If n = 5, the function calls itself as follows:
factorial(5) → factorial(4) → factorial(3) → factorial(2) → factorial(1)

Each function call does one multiplication and passes a reduced value.

Since there are n calls, the time complexity is O(n).
*/