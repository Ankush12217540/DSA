#include <iostream>
using namespace std;

void printNumbers(int start, int end)
{
    if (start > end)
        return;
    cout << start << " ";
    printNumbers(start + 1, end);
}

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    printNumbers(1, n);
    return 0;
}
   