#include<bits/stdc++.h>
using namespace std;

int merge(int* arr, int start, int mid, int end){
    long long int inv=0;
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
            if(arr[i]>=2*arr[j]){
                inv += (mid-i+1);
            }
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
    return inv;
}

int mergesort(int* arr, int start, int end){
    long long int inv = 0;
     if(start<end){
        int mid = (start+end)/2;
        mergesort(arr,start,mid);
        mergesort(arr,mid+1,end);
        inv += merge(arr,start,mid,end);
    }
    return inv;
}

int main(){
    int arr[] = {2,4,3,5,1};
    int size = sizeof(arr)/sizeof(int);
    int inv = mergesort(arr,0,size-1);
    cout<<inv<<"\n";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}