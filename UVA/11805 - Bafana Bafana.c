#include<stdio.h>
int main()
{
    long long int n,p,k,mod,ball,c=0,t,i;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        c++;
        scanf("%lld%lld%lld",&n,&k,&p);
        mod=p%n;
        ball=k+mod;
        if(ball>n)
        {
            ball=ball-n;
        }
        printf("Case %lld: %lld\n",c,ball);
    }
    return 0;
}
