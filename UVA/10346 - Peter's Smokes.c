#include<stdio.h>
int main()
{
    long long int n,k,sum,m,t,rem,rem_sum,r,f;
    while(scanf("%lld%lld",&n,&k)==2)
    {
        sum=0;
        f=0;
        rem_sum=0;
        t=n;
       while(n!=0)
       {
           m=n;
           rem=m%k;
           rem_sum=rem_sum+rem;
           sum=sum+m+;
           n=n/k;
       }
       while(rem_sum!=0)
       {
          r=rem_sum/k;
          f=f+r;
          rem_sum=rem_sum/k;
       }
        printf("%lld\n",sum+f);
    }
    return 0;
}
