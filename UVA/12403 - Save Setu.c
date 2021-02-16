#include<stdio.h>
#include<string.h>
int main()
{
    long long int t,sum=0,tk=0;
    scanf("%lld",&t);
    t++;
    while(t--)
    {
        char c[100];
        scanf("%s",c);
        if(strcmp(c,"donate")==0 )
        {
            scanf("%lld",&tk);
            sum+=tk;
        }
        else
            printf("%lld\n",sum);
    }
    return 0;
}
