#include<stdio.h>
int main()
{
    long long int n,p;
    while(scanf("%lld",&n)==1)
    {
        p=0;
        if(n<0){return 0;}
        if(n>1)
        {
            p=n*25;
        }
        printf("%lld%%\n",p);

    }
    return 0;
}