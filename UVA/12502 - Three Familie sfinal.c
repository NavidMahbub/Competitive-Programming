#include<stdio.h>
int main()
{
    long long int n,x,y,z,total,i;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld%lld%lld",&x,&y,&z);
        total=((x+(x-y))*z)/(x+y);
        printf("%lld\n",total);
    }
    return 0;
}
