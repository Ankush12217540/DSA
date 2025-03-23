#include <iostream>
using namespace std;

void printEven(int n)
{
    if (n == 2)
    {
        cout << n << " ";
        return;
    }
    printEven(n - 2);
    cout << n << " ";
}
int main()
{
    int n;
    cout << "Enter Number : ";
    cin >> n;
    if (n % 2 == 0)
    {
        printEven(n);
    };
    if (n % 2 != 0)
    {
        n = n - 1;
        printEven(n);
    }
}