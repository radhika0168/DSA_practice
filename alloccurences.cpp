#include <iostream>
using namespace std;
int lastoccurrence(int *arr, int s, int k){
    if(s==0){
        return -1;
    }
    int i=lastoccurrence(arr+1,s-1,k);
    if(i==-1){
        if(arr[0] == k){
            return 1;
        }
        else return -1;
    }

    return i+1;
}

int alloccurence(int *arr, int s, int k, int *output, int i, int j){
    if(s==i){
        return j;
    }
    if(arr[i]==k){
        output[j] = i;
        return alloccurence(arr,s,k,output,i+1,j+1);
    }
    return alloccurence(arr,s,k,output,i+1,j);
}
int main(){
    int arr[] = {0,1,2,3,3,4,5,6,7,8,9};
    int size = sizeof(arr)/sizeof(int);
    int key;
    cin>>key;
    cout<<"pos: "<<lastoccurrence(arr,size,key);
    cout<<"\n";
    int i=0,j=0,output[100];
    int count = alloccurence(arr,size,key,output,i,j);
    cout<<"all occurences: ";
    for(int i=0;i<count;i++){
        cout<<output[i]+1<<" ";
    }
    return 0;
}
