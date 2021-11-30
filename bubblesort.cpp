#include <bits/stdc++.h>
using namespace std;

// void bubblesort(int* arr, int n){
//     //base case
//     if(n==1){
//         return;
//     }
//     for(int i=0;i<n-1;i++){
//         if(arr[i]>arr[i+1]){
//             swap(arr[i],arr[i+1]);
//         }
//     }
//     return bubblesort(arr,n-1);
// }

// optimized 
void bubblesort(int* arr,int i, int n){
    if(n==1){
        return;
    }
    if(i==n-1){
        return bubblesort(arr,0,n-1);
    }
    if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
    }
    bubblesort(arr,i+1,n);
}

int main(){
    int n;
    int arr[] = {1,4,1,4,5,67,3,67,1};
    n = sizeof(arr)/sizeof(int);
    // bubblesort(arr,n);
    bubblesort(arr,0,n);
    // for(auto i:arr){
    //     cout<<arr[i]<<" ";
    // }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}