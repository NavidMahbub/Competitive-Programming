
        /*		Problem Name : ***  ***
         *		Developed By : M@HBUB ALAM
         *		ID : CE-16042
         *		Date : 06-March-2017
         */

#include<bits/stdc++.h>

using namespace std;

int main(){

    char a[1000];
    while(cin>>a){
        if(a[0]=='0' && strlen(a)==1){
            return 0;
        }
        int sum=0,degre=1;
        for(int i=0;i<strlen(a);i++){
            int n = a[i]-'0';
            sum+=n;
        }

        int m=sum;
        while(sum>9){
                degre++;
            int k=sum,t=0;
            while(k!=0){
                t=t+(k%10);
            k=k/10;
            }
            sum=t;
        }

        for(int i=0;i<strlen(a);i++){
            cout<<a[i];
      }
        if(m%9==0){
            cout<<" is a multiple of 9 and has 9-degree "<<degre<<"."<<endl;
        }
        else
            cout<<" is not a multiple of 9."<<endl;
    }
return 0;
}