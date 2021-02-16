
#include<stdio.h>
int main()
{
    long long int l,w,h,i,n,c=0;
    scanf("%lld",&n);
    for(i=1; i<=n; i++)
    {
        while(scanf("%lld%lld%lld",&l,&w,&h)==3)
        {
            c++;

            if(l<=20 && h<=20 && w<=20)
            {
                printf("Case %lld: good\n",c);
            }
            else
                printf("Case %lld: bad\n",c);
        }
    }
    return 0;
}
