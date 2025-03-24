#include<iostream>
using namespace std;

void printArray(int arr[], int index){
    if(index==-1){
        return ;
    }
    cout<<arr[index]<<" ";
    printArray(arr,index-1);
}

int main(){
    int index=4;
    int arr[]={1,2,3,4,5};
    printArray(arr,index);
    return 0;
}