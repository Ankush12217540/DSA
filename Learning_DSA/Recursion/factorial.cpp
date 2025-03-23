#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n == 1 || n == 0)
        return 1;

    return n * factorial(n - 1);
};

int main()
{
    int n;
    cout << " Enter number : ";
    cin >> n;
    if(n<0){
        cout<<"Factial of number less than 0 is not possible "<<endl;
        return 0;
    }
    cout << " factorial of " << n << " is : " << factorial(n);
}