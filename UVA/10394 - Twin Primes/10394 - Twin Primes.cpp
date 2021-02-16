

///                          ===>>	Problem Name : ***  Twin prime   ***
///                          ===>>	M@HBUB ALAM ,CSE,MBSTU.
///                          ===>>	Date : 26-March-2017

#include<bits/stdc++.h>
#include<math.h>
#define MX 18411500

int a[MX];
int t_a[200005];

void sieve() {
    int i,j;

    a[0]=1;
    a[1]=1;

    int sq=sqrt(MX);

    for(i=2; i<=sq; i++) {
        if(!a[i]) {
            for(j=i*i; j<MX; j=j+i) {
                a[j]=1;
            }
        }
    }

    int cnt=1;
    for(i=2; i<MX-2; i++) {
        if(!a[i]) {
            if(!a[i+2]) {
                t_a[cnt++]=i;
            }
        }
    }
    return ;
}

int main() {

    int n;
    sieve();

    while(scanf("%d",&n)==1) {
        printf("(%d, %d)\n",t_a[n],t_a[n]+2);
    }

    return 0;
}
