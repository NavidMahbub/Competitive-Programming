#include<stdio.h>
int prime(long long int n)
{
    long long int i;
    for(i=2; i<n/2; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
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
    long long int n,j,c,p,flag;
    while(scanf("%lld",&n))
    {
        flag=0;
        c=prime(n);
        if(c==1)
        {
            p=palindrome(n);
            if(p==1)
            {
                flag=1;
            }
        }
        printf("%lld\n",2*n);
        if(flag==1){return 0;}
    }
    return 0;
}

