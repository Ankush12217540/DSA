#include <iostream>
using namespace std;

// Function to demonstrate recursion: Factorial of a number
int factorial(int n) {
    if (n == 0 || n == 1)  // Base case
        return 1;
    else
        return n * factorial(n - 1);  // Recursive case
}

// Function to demonstrate recursion: Fibonacci series
int fibonacci(int n) {
    if (n == 0)  // Base case 1
        return 0;
    else if (n == 1)  // Base case 2
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);  // Recursive case
}

// Function to demonstrate recursion: Countdown
void countdown(int n) {
    if (n == 0) {  // Base case
        cout << "Liftoff!" << endl;
        return;
    } else {
        cout << n << endl;
        countdown(n - 1);  // Recursive case
    }
}

int main() {
    int number;

    // Factorial example
    cout << "Enter a number to calculate factorial: ";
    cin >> number;
    cout << "Factorial of " << number << " is: " << factorial(number) << endl;

    // Fibonacci example
    cout << "Enter a position in Fibonacci series: ";
    cin >> number;
    cout << "Fibonacci number at position " << number << " is: " << fibonacci(number) << endl;

    // Countdown example
    cout << "Enter a number to start countdown: ";
    cin >> number;
    countdown(number);

    return 0;
}
