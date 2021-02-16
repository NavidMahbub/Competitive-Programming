#include<stdio.h>
int main()
{
    long long int n,first=0,sec=1,finl,i;
    while(scanf("%lld",&n))
    {
        first=0;sec=1;
        if(n==0){return 0;}
        for(i=1;i<=n;i++)
        {
            finl=first+sec;
            first=sec;
            sec=finl;
        }
        printf("%lld\n",finl);

    }
    return 0;
}