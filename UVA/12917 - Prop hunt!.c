#include<stdio.h>
int main()
{
    long long int n,p,q;
    while(scanf("%lld%lld%lld",&n,&p,&q)==3)
    {
       if(n+p<=q)
       {
           printf("Props win!\n");
       }

        if(n+p>q)
       {
           printf("Hunters win!\n");
       }
    }
    return 0;
}