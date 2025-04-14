#include <iostream>
using namespace std;

// Function Template to swap two values
template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    cout << "Before Swap: x = " << x << ", y = " << y << endl;
    swapValues(x, y);  // Swapping integers
    cout << "After Swap: x = " << x << ", y = " << y << endl;

    double m = 1.5, n = 2.5;
    cout << "Before Swap: m = " << m << ", n = " << n << endl;
    swapValues(m, n);  // Swapping doubles
    cout << "After Swap: m = " << m << ", n = " << n << endl;
    
    return 0;
}
