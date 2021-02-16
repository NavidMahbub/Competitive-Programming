#include<stdio.h>
int main()
{
    long long int n,i,a,b,c,p,q,r;
    scanf("%lld",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);
        if(a>=b)
        {
            if(b>=c)
            {
                p=a;
                q=b;
                r=c;
            }
            else
            {
                if(a<c)
                {
                    p=c;
                    q=a;
                    r=b;
                }
                else
                {
                    p=a;
                    q=b;
                    r=c;
                }
            }
        }
        else
        {
            if(b<=c)
            {
                p=c;
                q=b;
                r=a;
            }
            else
            {
                p=b;
                q=a;
                r=c;
            }
        }
        if(p<q+r)
            printf("OK\n");
        else
            printf("Wrong!!\n");
    }
    return 0;
}
