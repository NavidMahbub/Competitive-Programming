#include<stdio.h>
int main()
{
    long long int n,i,sum;
    printf("PERFECTION OUTPUT\n");
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
        {
            printf("END OF OUTPUT\n");
            return 0;
        }
        sum=0;
        for(i=1; i<n; i++)
        {
            if(n%i==0)
            {
                sum+=i;
            }
        }
        if(sum==n)
        {
            printf("%5lld  PERFECT\n",n);
        }
        if(sum<n)

        {
            printf("%5lld  DEFICIENT\n",n);
        }
        if(sum>n)
        {
            printf("%5lld  ABUNDANT\n",n);
        }
    }
    return 0;
}
