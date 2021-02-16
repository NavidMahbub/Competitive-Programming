#include<stdio.h>
int main()
{
    long long int a[100000],b[100000],l,n,i,sum,flag,t,p=0;;

    scanf("%lld",&t);
    while(t--)
    {
        sum=0;
        flag=0;
        scanf("%lld%lld",&n,&l);
        for(i=0;i<n;i++)
        {
           scanf("%lld",&a[i]);
        }
         for(i=0;i<n;i++)
        {
           scanf("%lld",&b[i]);
        }

        for(i=0;i<n;i++)
        {
           sum=sum+a[i];
        }

        for(i=0;i<n;i++)
        {
           if(a[i]>b[i])
           {
               flag=5;
           }
        }
        p++;
        if((sum<=l)&& flag==0)
        {
            printf("Case %lld: Yes\n",p);
        }
        else

         printf("Case %lld: No\n",p);
    }
    return 0;
}