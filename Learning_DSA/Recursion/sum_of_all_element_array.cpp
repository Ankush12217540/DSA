
#include <iostream>
using namespace std;

int sum(int arr[], int index, int end) {
    if (index > end) return 0;  // Base case: when index exceeds end, stop recursion

    return arr[index] + sum(arr, index + 1, end);  // Recursive call
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int start = 0, end = 5;

    cout << "Sum of all elements of array is: " << sum(arr, start, end);
    return 0;
}
