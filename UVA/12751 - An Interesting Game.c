#include<stdio.h>
int main()
{
    long long int n,x,k,t,total,i,j,sum1,sum2,m,c=0;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        sum1=0,sum2=0;c++;
        scanf("%lld%lld%lld",&n,&k,&x);
        for(j=1; j<=n; j++)
        {
            sum1=sum1+j;
        }
        for(m=x; m<=x+k-1; m++)
        {
             sum2=sum2+m;
        }
        printf("Case %lld: %lld\n",c,sum1-sum2);
    }
    return 0;
}

