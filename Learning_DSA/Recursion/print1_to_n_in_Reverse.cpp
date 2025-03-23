#include<iostream>
using namespace std;
void print(int n){
    if(n==1){
        cout<<n<<endl;
        return ;
    }
    print(n-1);
    cout<<n<<endl;
}

int main()
{
    cout << "Enter the number :";
    int n;
    cin >> n;
    print(n);
    return 0;
}
