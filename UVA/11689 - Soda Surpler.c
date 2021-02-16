#include <stdio.h>
int main()
{
    long long int t,n,e,f,g,rem,i,sum,c=0;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        sum=0;
        scanf("%lld%lld%lld",&e,&f,&g);
        n=e+f;
       while(n>=g)
        {
            rem=n%g;
            sum=sum+n/g;
            n=n/g;
            n=n+rem;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
