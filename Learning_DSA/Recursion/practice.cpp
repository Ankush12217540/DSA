#include<iostream>
using namespace std;

int sumArray(int arr[], int start, int end){
    if(start==end) return arr[start] ;
    return arr[start] + sumArray(arr,start+1,end);
}
void printArray(int arr[],int start, int end){
    if(start==end){
        return ;
    }
    cout<<arr[start]<<" ";
    printArray(arr,start+1,end);
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int sum[]={1,2,3,4};
    int start,end; cout<<"Enter start , end : ";
    printArray(arr,0,6);
    cout<<" sum of all the element of the array sum is : "<<sumArray(sum,0,3);
    return 0;

}