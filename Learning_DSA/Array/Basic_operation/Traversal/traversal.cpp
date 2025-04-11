#include <iostream>
using namespace std;

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Forward Traversal: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "Reverse Traversal: ";
    for (int i = size - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    cout << "Even Elements: ";
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << " ";
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << "Index " << i << " → Value: " << arr[i] << endl;
    }

    cout << "Doubled Values: ";
    for (int i = 0; i < size; i++)
    {
        arr[i] *= 2; // Modify original
        cout << arr[i] << " ";
    }

    // while loop
    int i = 0;
    while (i < size)
    {
        cout << arr[i] << " ";
        i++;
    }

    // do-while loop
    i = 0;
    do
    {
        cout << arr[i] << " ";
        i++;
    } while (i < size);
}
