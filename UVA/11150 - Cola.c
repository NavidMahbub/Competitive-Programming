#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n)==1)
    {
        int sum=n,rem;
        while(n>2)
        {
            rem=n%3;
            sum+=n/3;
            n=n/3 + rem;
        }
        if(n==2)sum++;
        printf("%d\n",sum);
    }
    return 0;
}