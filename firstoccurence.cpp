#include<iostream>
using namespace std;


// int firstoccurence(int* arr,int n, int size){
//     if(size==0){
//         return -1;
//     }
//     if(size==1 and arr[0]==n){
//         return 1;
//     }
//     if(arr[0]==n){
//         return 1;
//     }
//     int i=firstoccurence(arr+1,n,size-1);
//     if(i==-1){
//        return -1;
//     }
//     return i+1;
// }


// for loop approach
int firstoccurence(int* arr, int n, int size,int i){
    // int i=0;
    if(arr[i]==n){
        return i;
    }
    if(i==size){
        return -1;
    }
    return firstoccurence(arr,n,size,i+1);
}

int main(){
    int n;
    cin>>n;
    int arr[] = {0,1,2,3,4,5,6,6,7,8};
    int size  = sizeof(arr)/sizeof(int);
    // cout<<"pos: "<<firstoccurence(arr,n,size);
    int i=0;
    cout<<"pos: "<<firstoccurence(arr,n,size,i)+1;
    return 0;
}