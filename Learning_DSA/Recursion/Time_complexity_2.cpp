#include <iostream>
using namespace std;

/*
Fibonacci function using recursion.
Time Complexity: O(2ⁿ)
- Each function call creates two new calls, leading to an exponential growth of calls.
*/

int fibonacci(int n) {
    if (n == 0) return 0;  // Base case
    if (n == 1) return 1;  // Base case
    
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
}

int main() {
    int n = 6;
    cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;
    return 0;
}

/*
suppose we call fibonacci(6), then see the recursive call  :

fibonacci(6) 
├── fibonacci(5) 
│   ├── fibonacci(4)
│   │   ├── fibonacci(3)
│   │   ├── fibonacci(2)
│   ├── fibonacci(3)
├── fibonacci(4)

*/