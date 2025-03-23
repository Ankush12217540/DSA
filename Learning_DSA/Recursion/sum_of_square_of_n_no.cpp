#include <iostream>
using namespace std;

int sum_square(int m, int n)
{
    if (n == 1)
        return 1;

    return n * n + sum_square(2, n - 1);
}

int main()
{
    int m = 2;
    int n;
    cout << "Enter the number : ";
    cin >> n;
    cout << "sum of square upto number " << n << " is : " << sum_square(m, n);
    return 0;
}