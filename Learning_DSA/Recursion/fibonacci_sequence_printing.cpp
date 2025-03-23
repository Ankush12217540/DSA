#include<iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;
    cout << "Enter nth number: ";
    cin >> n;
    cout << "Fibonacci sequence: ";
    
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";  // Call fibonacci for each term
    }

    return 0;
}