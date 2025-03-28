#include <iostream>
using namespace std;

bool search(int arr[], int element, int index, int N)
{
    if (index == N)
        return 0;
    if (arr[index] == element)
        return 1;
    return search(arr, element, index + 1, N);
}

int main()
{
    string found = "element found";
    string notFound = "element not found";
    int arr[] = {1, 2, 3, 4, 6, 7, 8, 4};
    int element = 5, index = 0, N = 7;
    if (search(arr, element, index, N) != 0)
        cout << found;
    else
        cout << notFound;
    return 0;
}