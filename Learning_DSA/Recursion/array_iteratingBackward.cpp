// when index of the array is at end 
// iterating backward of a array

#include<iostream>
using namespace std;

void printArray(int arr[],int index){
    if(index==-1){
        return ;
    }
    printArray(arr,index-1);
    cout<<arr[index];
}

int main(){
    int index=4;
    int arr[]={1,2,3,4,5};
    printArray(arr,index);
}