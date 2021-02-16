#include<stdio.h>
int main()
{
    long long int d,s,n,i,d1;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld%lld",&s,&d);
        d1=(s-d)/2;
        if( d1<0 || (s+d)%2!=0)
        {
            printf("impossible\n");
        }
        else
            printf("%lld %lld\n",(s+d)/2,d1);
    }
    return 0;
}
