#include <iostream>
using namespace std;

int bSearch(int arr[], int element, int low , int high) {
    // Base case: if low > high, the element is not found
    if (low > high) 
        return -1;

    int mid = (low + high) / 2;
    
    if (arr[mid] == element) 
        return mid; // Element found
    
    if (arr[mid] > element) 
        return bSearch(arr, element, low, mid - 1); // Search left half
    else 
        return bSearch(arr, element, mid + 1, high); // Search right half
}

int main() {
    int arr[] = {2, 3, 4, 10, 15, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int element = 23;

    int result = bSearch(arr, element, 0, n - 1);
    
    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
