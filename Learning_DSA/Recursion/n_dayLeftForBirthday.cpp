#include <iostream>
using namespace std;

// without recursion, using iterative approach
/*
int main(){
    int n=3;
    for(int i=3; i>0; i--){
        cout<< i<<" days left for Birthday " <<endl;
    }
    cout<<"Happy Birthday"<<endl;
}
*/

// with Recursion
void birthday(int n)
{
    if (n == 0)
    {
        cout << "Happy Birthday" << endl;
        return; // Stop recursion after printing "Happy Birthday"
    }

    cout << n << " days left for birthday" << endl;
    birthday(n - 1); // Correct recursive call
}

int main()
{
    int i = 3;
    birthday(i);
    return 0;
}