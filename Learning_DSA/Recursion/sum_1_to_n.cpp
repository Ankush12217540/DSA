#include <iostream>
using namespace std;

int sum_recursive(int n) {
    // Base case: if n is 0, the sum is 0
    if (n == 0) {
        return 0;
    }
    // Recursive case: sum n + sum of numbers from 1 to n-1
    else {
        return n + sum_recursive(n - 1);
    }
}

int main() {
    int n = 5;
    cout << "The sum of numbers from 1 to " << n << " is: " << sum_recursive(n) << endl;
    return 0;
}
