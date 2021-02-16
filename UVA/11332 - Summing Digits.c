#include<stdio.h>
long long int sum(long long int n)
{
    long long int n2=0;
    while(n!=0)
    {
        n2=n2+n%10;
        n=n/10;
    }
    return n2;
}
int main()
{
    long long int n;
    while(scanf("%lld",&n))
    {
        if(n==0){return 0;}
        while(n>9)
        {
            n=sum(n);
        }
        printf("%lld\n",n);
    }

    return 0;
}