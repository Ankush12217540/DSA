#include <iostream>
using namespace std;

// Function Template to add two values of any type
template <typename T>
T add(T a, T b) {
    return a + b;
}

int main() {
    // Calling the template function with int type
    cout << "Sum of 5 and 3: " << add(5, 3) << endl;  // int type

    // Calling the template function with float type
    cout << "Sum of 5.5 and 3.2: " << add(5.5, 3.2) << endl;  // float type
    
    return 0;
}
