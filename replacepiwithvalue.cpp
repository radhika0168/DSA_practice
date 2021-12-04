// replace the value of pi in the given string into its value annd then shift the others elements .....
// for ex. abcpihgj....ans = abc3.14hgj
#include<bits/stdc++.h>
using namespace std;

void replacepi(char* a, int i){
        if(a[i]=='\0'){
            return;
        }
        if(a[i]=='p' && a[i+1]=='i'){
            int j=i+2;
            while(a[j]!='\0'){
                j++;
            }
            for(int k=j+2;k>=i+2;k--){
                a[k] = a[j];
                j-=1;
            }
            a[i] = '3';a[i+1] = '.';a[i+2] = '1'; a[i+3] = '4';
        }
        else{
            replacepi(a,i+1);
        }

}

int main(){
    char a[10000];
    cin>>a;
    replacepi(a,0);
    for(int i=0;i<strlen(a);i++){
        cout<<a[i]<<"";
    }
    return 0;
}