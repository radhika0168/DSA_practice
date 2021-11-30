#include<iostream>
using namespace std;

int multiply(int n1,int n2){
    if(n2==0){
        return 0;
    }
    return multiply(n1,n2-1)+n1;
}
int main()
{
    int n1;
    int n2;
    cin>>n1>>n2;
    cout<<multiply(n1,n2);
    return 0;
}
