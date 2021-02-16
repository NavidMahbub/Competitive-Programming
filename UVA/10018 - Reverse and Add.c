#include<stdio.h>
int main()
{
    long long int t,n,c,i,rem,num,p,o;
    scanf("%lld",&t);
    for(i=1; i<=t; i++)
    {
        c=0;
        scanf("%lld",&n);
        while(n!=num)
        {
            p=n;
            num=0;
            while(n!=0)
            {
                rem=n%10;
                num=num*10+rem;
                n=n/10;
            }
            n=p+num;
            num=0;
            o=n;
             while(n!=0)
            {
                rem=n%10;
                num=num*10+rem;
                n=n/10;
            }
            n=o;
            c++;
        }
        printf("%lld %lld\n",c,num);
    }
    return 0;
}
