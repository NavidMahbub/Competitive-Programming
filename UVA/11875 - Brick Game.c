#include<stdio.h>
int main()
{
    long long int t,n,i,k,p,l,g,c=0;
    scanf("%lld",&t);
    for(i=1;i<=t;i++)
    {
        c++;
       scanf("%lld",&n);
       g=(n/2)+1;
       for(k=1;k<=n;k++)
       {
           scanf("%lld",&p);
           if(k==g)
           {
               l=p;
           }
       }
       printf("Case %lld: %lld\n",c,l);
    }
    return 0;
}