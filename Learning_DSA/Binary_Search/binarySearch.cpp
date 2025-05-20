// Iterative approach to find the element using binary search



#include <iostream>
using namespace std;

int bSearch(int arr[], int element, int low, int high) {
    while (low <= high) {
        int mid = low + (high - low) / 2; // Correctly calculate mid to avoid overflow
        
        if (arr[mid] == element) 
            return mid; // Element found
        
        if (arr[mid] < element) 
            low = mid + 1; // Search the right half
        else 
            high = mid - 1; // Search the left half
    }
    
    
    return -1; // Element not found
}

int main() {
    int arr[] = {2, 3, 4, 10, 15, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int element = 10;

    int result = bSearch(arr, element, 0, n - 1);
    
    if (result != -1)
        cout << "Element found at index: " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}


