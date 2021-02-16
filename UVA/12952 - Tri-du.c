#include<stdio.h>
int main()
{
    long long int a,b;
    while(scanf("%lld%lld",&a,&b)==2)
    {
        if (a>=b)
        {
            printf("%lld\n",a);
        }
        else
             printf("%lld\n",b);
    }
    return 0;
}
