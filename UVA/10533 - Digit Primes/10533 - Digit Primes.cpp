
///                          ===>>	Problem Name : ***     ***
///                          ===>>	M@HBUB ALAM ,CSE,MBSTU.
///                          ===>>	Date : 27-March-2017

#include<bits/stdc++.h>
using namespace std;
#define max 1000006
int a[max];
int d_a[max];

void sieve() {
    a[0]=1;
    a[1]=1;

    for(int i=2; i<=1000; i++) {
        if(a[i]==0) {
            for(int j=i*i; j<max; j=j+i) {
                a[j]=1;
            }
        }
    }

    int update=0;
    for(int i=0; i<max; i++) {

        int s=0,n=i;
        if(a[n]==0) {
            while(n>=10) {
                s+=(n%10);
                n/=10;
            }
            s+=n;
            if(a[s]==0) {
                update++;
            }
        }
        d_a[i]=update;
    }
}
int main() {
    int t,n,m;
    sieve();
    scanf("%d",&t);
    while(t--) {
        scanf("%d%d",&n,&m);
        printf("%d\n",d_a[m]-d_a[n-1]);
    }
    return 0;
}
