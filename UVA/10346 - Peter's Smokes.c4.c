#include <stdio.h>
int main()
{
    long long int n,rem,sum,p;

   while( scanf("%lld",&n)==1)
    {
        if(n==0){return 0;}
        sum=0;
       while(n>=3)
        {
            rem=n%3;
            sum=sum+n/3;
            n=n/3;
            n=n+rem;
        }
        if(n==2)
        {
            sum=sum+1;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
