#include<stdio.h>
int main()
{
     long long int   s,d,t,di ,total,i,n;
     float pht;

    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld%lld%lld",&s,&d,&t);
        di=s-d;
        pht= t/(s+d);
        total=s*pht+di*pht;
        if (total<=0 ||  d>=10)
        {
            total=0;
        }
        printf("%lld\n",total);

    }
    return 0;
}
