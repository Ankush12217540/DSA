#include <iostream>
using namespace std;

// Function Template to display the sum of two different types
template <typename T, typename U>
auto displaySum(T a, U b) {
    return a + b;
}

int main() {
    cout << "Sum of int and double: " << displaySum(5, 3.5) << endl;  // int + double
    cout << "Sum of double and float: " << displaySum(1.2222, 3.8f) << endl;  // double + float
    
    return 0;
}
