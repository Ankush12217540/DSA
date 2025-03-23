#include<iostream>
using namespace std;

int gcd(int a, int b)
{
    if(b==0) return a;

    return gcd(b,a%b);
}

int main(){
    int n,m;
    cout<<"Enter 1st number : ";cin>>n;
    cout<<"Enter 2nd number : ";cin>>m; cout<<endl;
    cout<<"GCD of two number "<<n<<" and "<< m << " is : "<< gcd(n,m);

}