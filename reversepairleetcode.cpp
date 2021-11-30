#include<iostream>
using namespace std;

long long int merge(int* arr, int lb, int ub){
    int mid = (lb+ub)/2;
    int n1 = mid-lb+1;
    int n2 = ub-mid;
    long long int inv = 0;
    int a[n1],b[n2];
    for(int i=0;i<n1;i++){
        a[i] = arr[lb+i];
    }
    for(int i=0;i<n2;i++){
        b[i] = arr[mid+1+i];
    }
    int i=0,j=0,k=lb;
    while(i<n1 && j<n2){
        if(a[i]<=b[i]){
            arr[k] = a[i];
            k++;
            i++;
        }
        else {
            arr[k] = a[j];
            if(a[i]>=2*b[j]){
                inv+=(n1-i);
            }
            k++;j++;
        }

        // else if((a[i]>= 2*b[j]) && (j<n2)){
        //     arr[k++] = b[j++];
        //     inv+=(n1-i);
        // }
        // else{
        //     arr[k++] = b[j++];
        // }
    }
    while(i<n1){
        arr[k++] = a[i++];
    }
    while(j<n2){
        arr[k++] = b[j++];
    }

    return inv;
}

long long int mergesort(int* arr, int lb, int ub){
     long long int inv = 0;
    if(lb<ub){
        int mid = (lb+ub)/2;
        inv += mergesort(arr,lb,mid);
        inv+=mergesort(arr,mid+1,ub);
        inv+=merge(arr,lb,ub);
    }
    return inv;
}

int main(){
    int arr[] = {2,6,3,5,1};
    int size = sizeof(arr)/sizeof(int);
    int inversion = mergesort(arr,0,size-1);
    cout<<inversion<<"\n";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}