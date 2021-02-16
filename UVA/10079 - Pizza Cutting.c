#include<stdio.h>
int main()
{
    long long int n;
    while(scanf("%lld",&n))
    {
        if(n<0){return 0;}

        long long int i,p=1,sum=1;
        for(i=1;i<=n;i++)
        {
            sum+=p;
            p++;
        }
        printf("%lld\n",sum);
    }
    return 0;
}