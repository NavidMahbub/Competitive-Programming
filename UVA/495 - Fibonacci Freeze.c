#include<stdio.h>


int main() {
    long long int i,n,f,s,fn;
    //int f[1000],s[1000],fn[1000];
    while(scanf("%lld",&n)==1) {
       f=0;s=1;
       for(i=1;i<n;i++){
            fn=f+s;
            f=s;
            s=fn;
       }
       printf("The Fibonacci number for %lld is %lld\n",n,fn);
    }
    return 0;
}

