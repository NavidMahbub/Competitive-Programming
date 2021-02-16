#include<stdio.h>
int main()
{
    long long int t,c,d,i,j,a[10],m,f=0;
    scanf("%lld",&t);
    while(t--)
    {
        c=0;
        d=0;
        for(j=0; j<10; j++)
        {
            scanf("%lld",&a[j]);
        }
        for(m=0; m<9; m++)
        {
            if(a[m]>a[m+1])
            {
                c++;
            }
        }
        for(m=1; m<10; m++)
        {
            if(a[m-1] < a[m])
            {
                d++;
            }
        }

        if(f==0)
            printf("Lumberjacks:\n");
        f++;
        if(c==9 || d==9)
            printf("Ordered\n");
        else
            printf("Unordered\n");

    }

    return 0;
}
