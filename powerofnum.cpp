#include<iostream>
using namespace std;

// my soln.....
int power(int n,int pow){
    if(pow==0){
        return 1;
    }

    return power(n,pow-1)*n;
}

// optimized soln......
int optimizedmethod(int num, int pow){
    if(pow==0){
        return 1;
    }
    int smallsqaure = optimizedmethod(num,pow/2);
    smallsqaure*= smallsqaure;
    if(pow&1){
        smallsqaure = smallsqaure*num;
    }
    return smallsqaure;
}

int main(){
    int n,pow;
    cin>>n>>pow;
    cout<<power(n,pow);
    cout<<optimizedmethod(n,pow);
    return 0;
}