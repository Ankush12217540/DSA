#include <iostream>
using namespace std;

// General Template
template <typename T>
void printType(T x) {
    cout << "This is a general template." << endl;
}

// Template Specialization for int
template <>
void printType<int>(int x) {
    cout << "This is a specialized template for int. Value: " << x << endl;
}

int main() {
    printType(5);    // Specialized version for int
    printType(3.14); // General template for double
    
    return 0;
}
