#include<stdio.h>
int main()
{
    int t,n,i=0;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
         i++;
        int j,sum=1;

        for(j=2;j<=n;j++)
        {
            sum+=2;
        }
        printf("Case #%d: %d\n",i,sum);
    }
    return 0;
}