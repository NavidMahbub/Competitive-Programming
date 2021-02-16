#include<stdio.h>

long long int reverse(long long int n)
{
    long long int num=0,rem;

    while(n!=0)
    {
        rem=n%10;
        num=num*10+rem;
        n=n/10;
    }
    return num;
}

int palindrome(long long int n)
{
    long long int i=0,p,j;
    int a[100000];
    while(n!=0)
    {
        a[i]=n%10;
        n=n/10;
        i++;
    }
    for(p=0,j=i-1;p<i/2;p++,j--)
    {
        if(a[p]!=a[j])
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    long long int n,t,i,p;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld",&n);
        p=0;
        i=0;
        while(p!=1)
        {
            n=n+reverse(n);
            p=palindrome(n);
            i++;
        }

        printf("%lld %lld\n",i,n);
    }
    return 0;
}
