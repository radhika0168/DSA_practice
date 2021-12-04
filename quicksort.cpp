#include<iostream>
using namespace std;

int partition(int* a,int start, int end){
    
    int i=start;
    int j=end;
    int pivot = a[start];

    while(i<j){
        while(i<end && a[i]<=pivot){
            i++;
        }
        while(j>start && a[j]>pivot ){
            j--;
        }
        if(i<j){
            swap(a[i],a[j]);
            
        }
    }
    swap(a[j],a[start]);
    return j;

}

void quicksort(int* a, int start, int end){
   if(start>end){
       return;
   }
   int p = partition(a,start,end);
   quicksort(a,start,p-1);
   quicksort(a,p+1,end);
}

int main(){
    int arr[] = {3,4,5,2,3,5,1};
    int size = sizeof(arr)/sizeof(int);
    quicksort(arr,0,size-1);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}