#include<iostream>
using namespace std;

// Bubble Sort repeatedly compares adjacent elements and swaps them if they are in the wrong order.
// After each full pass, the largest unsorted element moves ("bubbles") to the end.
// This process is repeated until the array is sorted.

void bubbleSort(int arr[], int n){                // 2,4,3,6 
    bool swapped;
    for(int i=0; i<n-1; i++){
        swapped=false;
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                swapped =true;
            }
        }
        if(!swapped) break;
    }
}

int main(){
    int arr[]={5,3,1,7,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr,n);

    cout<<"Sorted array: ";
    for(int i=0; i<n; i++) cout<<arr[i]<<" "; return 0;
}



/*  
----reason why 'bool swapped' is used: 
If no swaps → array is already sorted → stop early → optimization.
🚫 Without it → algorithm keeps running unnecessary passes → slower.


---------Time complexity----------------
Case	Comparisons	Time
Best Case:	Array already sorted (can be optimized with a flag)	   O(n)
Average	General case: 	                                           O(n²)
Worst Case	Reverse order:                                        O(n²)

*/