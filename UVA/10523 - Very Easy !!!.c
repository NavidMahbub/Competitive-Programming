#include<stdio.h>
long long int power(long long int n,long long int j)
{
    long long ans=1,i;
    for(i=1;i<=j;i++)
    {

        ans=ans*n;
    }
    return ans;
}
int main()
{
    long long int n,a,i,sum;
    while(scanf("%lld%lld",&n,&a)==2)
    {
        sum=0;
        for(i=0;i<=n;i++)

        {
            sum=sum+(i*power(a,i));
        }
        printf("%lld\n",sum);

    }
    return 0;
}