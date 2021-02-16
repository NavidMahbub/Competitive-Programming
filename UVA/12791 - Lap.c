#include<stdio.h>
int main()
{
    long long int slow ,fast,i;
    while(scanf("%lld%lld",&fast,&slow)==2)
    {
       for(i=1;;i++)
       {
           if( (i*slow)-(i*fast)>=slow)
           {
               break;
           }
       }
       printf("%lld\n",i);
    }
    return 0;
}