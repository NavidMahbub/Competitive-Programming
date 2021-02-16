#include <stdio.h>
int main()
{
    long long int n,a,b,c,i;
    scanf("%lld",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%lld %lld %lld",&a,&b,&c);


            if(a+b>c)
                printf("OK\n");
            else if (b+c>a)
                printf("OK\n");
            else if (c+a>b)
                printf("OK\n");
            else if (b+c==a)
                printf("Wrong\n");
            else if (a+b==c)
                printf("Wrong\n");
            else if (c+a==b)
                printf("Wrong\n");
            else
                printf("Wrong\n");


    }
    return 0;
}

