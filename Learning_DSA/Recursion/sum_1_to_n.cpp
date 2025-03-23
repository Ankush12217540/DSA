#include <iostream>
using namespace std;

int sum_recursive(int n)
{
    if (n == 0)
        return 0;
    return n + sum_recursive(n - 1);
}

int main()
{
    int n;
    cout << "Enter the number upto where you want to find the sum : " ; cin>>n;
    cout << "The sum of numbers from 1 to " << n << " is: " << sum_recursive(n) << endl;
    return 0;
}
