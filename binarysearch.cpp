#include<iostream>
using namespace std;
// 0  if number not found else return 1
int binarysearch(int* arr,int n, int s){
    if(s==0){
        return 0;
    }
    if(s==1 && n==arr[0]){
        return 1;
    }
    if(arr[s/2]==n){
        return 1;
    }
    else if(arr[s/2]>n){
        return binarysearch(arr,n,s/2);
    }
    else{
        return binarysearch(arr+(s/2),n,s);
    }
    return 0;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n;
    cin>>n;
    int size = sizeof(arr)/sizeof(int);
    cout<<binarysearch(arr,n,size);
    return 0;
}