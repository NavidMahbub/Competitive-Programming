///                          ===>>	Problem Name : ***     ***
///                          ===>>	M@HBUB ALAM ,CSE,MBSTU.
///                          ===>>	Date : 27-April-2017

#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main() {

    int t,cs=0;
    long long int n,tax;
    scanf("%d",&t);
    while(t--) {
        tax=0;
        scanf("%lld",&n);


        if(n>=1180000) {
            tax=150000;
            n=n-1180000;
            double d=(double)(25*n)/100;
            d=ceil(d);
            tax=tax+d;
        }


        else if(n<1180000 && n>=880000) {
            tax=90000;
            n=n-880000;
            double d=(double)(20*n)/100;
            d=ceil(d);
            tax=tax+d;
        }

        else if(n<880000 && n>=480000) {
            tax=30000;
            n=n-480000;
            double d=(double)(15*n)/100;
            d=ceil(d);
            tax=tax+d;
        }


        else if(n>180000) {
            tax=0;
            n=n-180000;
            double d=(double)(10*n)/100;
            d=ceil(d);
            tax=tax+d;
        }
        if(tax>0 && tax<2000) {
            tax=2000;
        }
        printf("Case %d: %lld\n",++cs,tax);
    }
    return 0;
}
