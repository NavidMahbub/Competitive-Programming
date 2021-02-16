#include<stdio.h>

int main()
{
    int t,n,a,cs=0,rem,num;
    scanf("%d",&t);
    while(t--)
    {
        cs++;
        scanf("%d",&n);
        a=n;

        while(n>9)
        {
            num=0;
            while(n!=0)
            {
                rem=n%10;
                num=num+(rem*rem);
                n=n/10;
            }
            n=num;
        }

        if(n==7 || n==1)
        {
            printf("Case #%d: %d is a Happy number.\n",cs,a);
        }
        else
        {
            printf("Case #%d: %d is an Unhappy number.\n",cs,a);
        }

    }
    return 0;
}
