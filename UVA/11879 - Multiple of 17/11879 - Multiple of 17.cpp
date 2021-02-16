

///                          ===>>	Problem Name : ***     ***
///                          ===>>	M@HBUB ALAM ,CSE,MBSTU.
///                          ===>>	Date : 27-March-2017

#include<bits/stdc++.h>
using namespace std;

int main(){
    char a[10000],b[5];
    while(1){
        cin>>a;
        if(strlen(a)==1 && a[0]=='0')return 0;

        int n=a[strlen(a)-1]-'0';
        n=n*5;
        int i=0;
        while(n!=0){
            b[i]=n%10;
            n=n/10;
            i++;
        }
        b[i]='\0';

        for(int i=strlen(a)-1;i>=0;i--){

        }
    }

return 0;
}
