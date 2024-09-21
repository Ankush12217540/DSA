#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    // Initialize two pointers: one at the beginning and one at the end
    int start = 0;
    int end = size - 1;

    // Swap elements while start is less than end
    while (start < end) {
        // Swap the elements at start and end
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        // Move the pointers towards each other
        start++;
        end--;
    }
}

int main() {
    // Example array
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Display the original array
    cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Call the reverse function
    reverseArray(arr, size);

    // Display the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
