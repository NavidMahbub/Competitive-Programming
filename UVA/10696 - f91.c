#include<stdio.h>
int main()
{
    long long int n;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
        {
            return 0;
        }
        if (n<=101)
        {
            printf("f91(%lld) = 91\n",n);
        }
        else
             printf("f91(%lld) = %lld\n",n,n-10);

    }
    return 0;
}
