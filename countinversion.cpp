#include<iostream>

int merge(int* arr, int lb, int ub){
    int mid = (lb+ub)/2;
    int n1 = mid-lb+1;
    int n2 = ub-mid;
    int a[n1],b[n2];
    for(int i=0;i<n1;i++){
        a[i] = arr[mid-lb+i];
    }
}

int mergesort(int* arr, int lb, int ub){
    long long int inv = 0;
    if(lb<ub){
        int mid  = (lb+ub)/2;
         inv += mergesort(arr,lb,mid);
         inv += mergesort(arr,mid+1,ub);
         inv += merge(arr,lb,ub);
    }
    return inv;
}

int main(){
    int arr[] = {3,2,4,5,1,4};
    int size = sizeof(arr)/sizeof(int);
    int inversion = mergesort(arr,0,size-1);
    cout<<inversion;
    return 0;
}