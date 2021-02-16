#include<stdio.h>
int main()
{
    long long int n,sum,i,m=1;
    while(scanf("%lld",&n)==1)
    {
        sum=0;
        for(i=1;i<=n;i++)
        {
            m=i*(i*i);
            sum=sum+m;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
