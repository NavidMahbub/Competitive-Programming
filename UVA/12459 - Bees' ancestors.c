#include<stdio.h>
int main()
{
    long long int n,i,f,s,fn;
    while(scanf("%lld",&n)==1)
    {
        fn=0,f=0,s=1;

        if(n==0){return 0;}
        for(i=1;i<=n;i++)
        {
        fn=f+s;
        f=s;
        s=fn;
        }
        printf("%lld\n",fn);
    }
    return 0;
}
