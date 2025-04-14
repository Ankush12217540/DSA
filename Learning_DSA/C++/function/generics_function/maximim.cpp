#include <iostream>
using namespace std;

// Function Template to find maximum of two values of any data type
template <typename T>
T maximum(T a, T b) {
    return (a > b) ? a : b;
}

int main() {
    // Calling the template function with int type
    cout << "Max of 5 and 9: " << maximum(5, 9) << endl;  // int type

    // Calling the template function with double type
    cout << "Max of 3.5 and 7.8: " << maximum(3.5, 7.8) << endl;  // double type
    
    return 0;
}
