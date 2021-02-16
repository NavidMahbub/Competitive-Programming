#include<stdio.h>
int main()
{

    int n,m,i,t,r=0;
    while(scanf("%d%d",&m,&n)==2)
    {
        if(r!=0)printf("\n");
        r++;
        if(m>n)
        {
            t=m;
            m=n;
            n=t;
        }
        for(i=m; i<=n; i++)

        {
            printf("%d\n",i+1);
        }

    }
    return 0;
}
