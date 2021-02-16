#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,i,c=0,j,h,m,k,l;
    while(scanf("%lld",&n)==1)
    {
        m=n;
        k=n;
        l=n;
        c=0;
        for(i=1; i<=k; i++)
        {
            if(c==0)
            {
                for(j=1; j<=j; j++)
                {
                    if(c==0)
                    {
                        h=pow(j,3)-pow(i,3);
                        if(h==m)
                        {
                            printf("%lld %lld\n",j,i);
                            c++;
                        }
                    }

                }
            }

        }
    }
    return 0;
}
