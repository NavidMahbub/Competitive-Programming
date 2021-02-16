///                          ===>>	Problem Name : ***     ***
///                          ===>>	M@HBUB ALAM ,CSE,MBSTU.
///                          ===>>	Date : 27-April-2017

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    while(cin>>n) {

        int f[10000];
        f[0]=1;
        int siz=1,carry,k;
        if((n<=7 && n>=0) || ((n<0 && n%2==0))) {
            cout<<"Underflow!"<<endl;
        } else if(n>7 && n<14) {
            for(int i=1; i<=n; i++) {
                carry=0;
                for(k=0; k<siz; k++) {
                    int t=f[k]*i+carry;
                    carry=t/10;
                    int p=t%10;
                    f[k]=p;
                }
                while(carry!=0) {
                    f[k]=carry%10;
                    k++;
                    carry/=10;
                }
                siz=k;
            }

            for(int i=siz-1; i>=0; i--) {
                cout<<f[i];
            }
            cout<<endl;
        } else {
            cout<<"Overflow!"<<endl;
        }
    }

    return 0;
}

