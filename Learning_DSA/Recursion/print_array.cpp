// Printing array using recurion
#include<iostream>
using namespace std;

void printArray(int arr[],int start, int end){
    if(start==end){
        return ;
    }
    cout<<arr[start]<<" ";
    printArray(arr,start+1,end);
}

int main(){
    int start,end;
    int arr[5]={1,2,3,4,5};
    cout<<"Start : ";cin>>start; cout<<"End : ";cin>>end;
    cout<<" Array : "; printArray(arr,start,end);
    return 0;
}