#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int current = arr[i]; // store the value to insert
        int j;
        for (j = i - 1; j >= 0; j--)
        {
            if (arr[j] > current)
            {
                arr[j + 1] = arr[j]; // shift
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = current; // insert original value
    }
}

int main()
{
    int arr[] = {3, 5, 6, 8, 9, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    insertionSort(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    return 0;
}

/*
⏱️ Time Complexity of Insertion Sort:

Case           Time Complexity
-------------------------------
Best Case      O(n)
Average Case   O(n²)
Worst Case     O(n²)

🔍 Explanation:
- In insertion sort, elements are picked one by one and inserted into the correct position in the sorted part of the array.
- In the best case (already sorted array), each insertion takes only 1 comparison → O(n)
- In the worst case (reverse sorted), every new element must be compared with all previously sorted ones → O(n²)

📌 Comparisons vs Shifts:
- Comparisons: O(n²) in average/worst case
- Shifts (or moves): O(n²) in worst case, O(1) in best case

✅ Stable sort (maintains the relative order of equal elements)
✅ In-place algorithm (uses constant extra memory)
✅ Efficient for small or nearly sorted datasets
🚫 Inefficient for large datasets compared to merge sort or quick sort
*/
