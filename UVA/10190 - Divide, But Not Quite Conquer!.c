#include<stdio.h>
int main()
{
    long long int a[1000],n,m;
    while(scanf("%lld %lld",&n,&m)==2)
    {
        long long int i=0,flag=1;
        if(m<=1 || n<=1 || n<m)
        {
            printf("Boring!\n");
        }
        else
        {
             a[0]=n;
             i++;
            while(1)
            {
                if((n%m)!=0)
                {
                    flag=0;
                    printf("Boring!\n");
                    break;
                }
                n=n/m;
                a[i]=n;
                if(n<=1)
                {
                    break;
                }

                i++;
            }
            if(flag==1)
            {

                int j;
                for(j=0; j<=i; j++)
                {

                    if(j==i)printf("%lld\n",a[j]);
                    else
                         printf("%lld ",a[j]);
                }

            }
        }
    }
    return 0;
}
