// finding the fibonacci sequence of nth element of the sequence using for loop

#include <iostream>
using namespace std;

int fib(int n)
{
    int a = 0, b = 1;
    int c;
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main()
{
    int n;
    cout << "Enter number: ";
    cin >> n;
    int i = 0;
    while (i < n)
    {
        cout << fib(i) << " ";
        i++;
    }
    return 0;
}
