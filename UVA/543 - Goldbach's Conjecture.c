#include<stdio.h>
#include<math.h>
int a[1000000];


int prime(int b)
{
    long long int i,k;
    for(i=2;i<=1000;i++)
    {
        if(a[i])
        {
            for(k=i*i;i<1000000;k+=i)
            {
                a[k]=0;
            }
        }
    }
    a[2]=0;

}
int main()
{
    long long i,j,n;
    while(scanf("%lld",&n)==1)
    {
        if(n==0)
        {
            break;
        }

        for( i=2; i<n; i++)
        {
            a[i]=1;
        }
        a[0]=0;
        a[1]=0;

        for(i=3; i<n; i++)
        {
            if(prime(i))
            {
                j=n-i;

                if(prime[j])
                {
                    printf("%lld = %lld + %lld\n",n,i,j);
                }
            }
        }
    }
    return 0;
}
