#include<stdio.h>
int main()
{
    long long int a,t,i,count;
    while(scanf("%lld",&t)==1)
    {
        count=0;
        if (t<=4)
        {
           for(i=1;i<=5;i++)
           {
               scanf("%lld",&a);
                if(a==t)
                {
                    count++;
                }
           }
        }
         printf("%lld\n",count);
    }
    return 0;
}
