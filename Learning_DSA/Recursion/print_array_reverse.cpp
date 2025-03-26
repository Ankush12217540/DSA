// Printing array using recurion
#include<iostream>
using namespace std;

void printArray(int arr[],int start, int end){
    if(start==end){
        return ;
    }
    printArray(arr,start+1,end);
    cout<<arr[start]<<" ";
}

int main(){
    int start,end;
    int arr[5]={1,2,3,4,5};
    cout<<"Start : ";cin>>start; cout<<"End : ";cin>>end;
    cout<<"Array  in reverse order : "; printArray(arr,start,end);
    return 0;
}