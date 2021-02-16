#include<stdio.h>
int main()
{
    long long int a[5],b[5],i,c,p;
    while(scanf("%lld",&p)==1)
    {
        c=0;
        a[0]=p;
        for(i=1;i<5;i++)
        {
            scanf("%lld",&a[i]);
        }
         for(i=0;i<5;i++)
        {
            scanf("%lld",&b[i]);
        }
         for(i=0;i<5;i++)
        {
            if(a[i]==b[i])
            {
                c++;
            }
        }
        if(c==0)
        {
            printf("Y\n");
        }
        else
            printf("N\n");
    }
    return 0;
}