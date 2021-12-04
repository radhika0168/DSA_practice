#include<bits/stdc++.h>
using namespace std;

void merge(int* arr, int start, int mid, int end){
    int i=start;
    int j=mid+1;
    int k = start;
    int b[100];

    while(i<=mid && j<=end){
        if(arr[i]<=arr[j]){
            b[k] = arr[i];
            i++;
        }
        else{
            b[k] = arr[j];
            j++;
        }
        k++;
    }

    if(i>mid){
        while(j<=end){
            b[k] = arr[j];
            k++;j++;
        }
    }
    else{
        while(i<=mid){
            b[k] = arr[i];
            k++;i++;
        }
    }

    for(int j=start;j<=end;j++){
        arr[j] = b[j];
    }
}

void mergesort(int* arr, int start, int end){
     if(start<end){
        int mid = (start+end)/2;
        mergesort(arr,start,mid);
        mergesort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
}

int main(){
    int arr[] = {3,5,6,2,2,1,0,7,2};
    int size = sizeof(arr)/sizeof(int);
    mergesort(arr,0,size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}