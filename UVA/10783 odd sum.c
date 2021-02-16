#include<stdio.h>
int main()
{
    int a,b,n,i,sum=0,j=1,t,m=0,k;
    scanf("%d",&n);
    k=n;
    if( n>0)
    {
        for(m=1; m<=n; m++)
        {
            scanf("%d%d",&a,&b);
            if(a>b)
            {
                t=a;
                a=b;
                b=t;
            }
            for(i=a; i<=b; i++)
            {
                if(i%2!=0)
                {
                    sum=sum+i;
                }
            }
            printf("case %d: %d\n",j,sum);
            sum=0;
            j++;


        }

    }
    return 0;
}
