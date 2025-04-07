#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {5, 4, 3, 2, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "original Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    selectionSort(arr, n);
    cout << "Sorted array: ";
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
    }
}

/*      ..........selection sort..............
Selection Sort works by dividing the array into two parts:
--->The sorted part (at the beginning)
--->The unsorted part (the rest of the array)

It repeatedly:
-->Finds the minimum element in the unsorted part
-->Swaps it with the first element of the unsorted part





------------------------Notes-------Time complexity------------
📊 Time Complexity:
Case	                Time
Best Case:	            O(n²)
Average Case:	        O(n²)
Worst Case	:            O(n²)
✅ But it's better than Bubble Sort in terms of total swaps (only one per pass)

*/



/*
It always runs two nested loops:

Outer loop runs n times

Inner loop runs n - i times

Even if the array is already sorted, it still compares all elements
*/