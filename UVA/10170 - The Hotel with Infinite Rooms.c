#include<stdio.h>
#define MAX 100000000
int main()
{
    long long int s,d,i,sum=0;;
    while(scanf("%lld%lld",&s,&d)==2)
    {
        sum=0;
        for(i=s;i<=MAX;i++)
        {
            sum+=i;
            if(sum>=d){break;}
        }
        printf("%lld\n",i);
    }
    return 0;
}