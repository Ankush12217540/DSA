// To find minimum element in an array using recursion

#include<iostream>
using namespace std;


int minElement(int arr[],int start,int end){
    int min=arr[start]; if(arr[start] > arr[start+1]) min=arr[start+1];
    if(arr[start]< arr[start+1]) min = arr[start];
    if(start==end) return min;
    return minElement(arr,start+1,end);
}

int main(){
    int arr[]={1,3,4,6,7,6,4,0, -1,5} , start =0 , end=7;
    cout<<"The min element of array is : "<<minElement(arr,start,end);
    return 0;
}