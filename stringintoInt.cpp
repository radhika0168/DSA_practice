#include<bits/stdc++.h>
using namespace std;
// convert given string into integer....
int spell(char* a, int len){
    if(len==0){
        return 0;
    }
    int small_sum = spell(a,len-1);
    int digit = a[len-1] - '0';
    return small_sum+=digit*10;
}

int main(){
    char a[] = "12345";
    int len = strlen(a);

    int x = spell(a,len);
    cout<<x<<" "<<x+1<<" "<<"\n";
    return 0;
}