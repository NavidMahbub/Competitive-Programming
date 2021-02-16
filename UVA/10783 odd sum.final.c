#include<stdio.h>
int main()
{
    long long int a,b,sum=0,i,t,c=0,n,j;
    scanf("%lld",&n);
    for(j=1; j<=n; j++)
    {
        while(scanf("%lld%lld",&a,&b)==2)
        {
            c++;
            sum=0;

            if(a<b)
            {
                for(i=a; i<=b; i++)
                {
                    if((i%2)!=0)
                    {
                        sum=sum+i;
                    }
                }
            }
            printf("Case %lld: %lld\n",c,sum);
        }
    }
    return 0;
}
