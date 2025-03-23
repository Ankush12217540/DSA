#include <iostream>
using namespace std;

int power(int base, int index)
{
    if (index == 1)
    {
        return base;
    }
    return base * power(base, index - 1);
};

int main()
{
    int base, index;
    cout << "Enter base and index : ";
    cin >> base >> index;
    cout << base << " power " << index << " = " << power(base, index);
    return 0;
}