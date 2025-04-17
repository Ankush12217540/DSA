// Basic initialization issue in array
#include <iostream>
using namespace std;

int main() {
    // Correct declaration and initialization
    int arr1[5] = {1, 2, 3, 4, 5};

    // Partial initialization: rest become 0
    int arr2[5] = {10, 20};

    // Size inferred automatically
    int arr3[] = {7, 8, 9};

    cout << "arr2[2]: " << arr2[2] << endl;  // Outputs 0
}
