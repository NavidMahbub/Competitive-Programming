#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,i,t,count,sum,r,m,rem;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        count=0;
        sum=0;
        scanf("%lld",&n);
        m=n;
        r=n;
        while(n!=0)
        {
            n=n/10;
            count++;
        }
        while(m!=0)
        {
            rem=m%10;
            sum=sum+pow(rem,count);
            m=m/10;
        }
        if(sum==r)
            printf("Armstrong\n");
        else
            printf("Not Armstrong\n",count);
    }
    return 0;
}


