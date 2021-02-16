#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,n,i,p,mile,j,cas=0;
    scanf("%d",&t);
    while(t--)
    {
        cas++;
        scanf("%d",&n);

        int a[n];
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        int mile=0,juice=0,total_mile=0,total_juice=0;

        for(j=0; j<n; j++)
        {
            p=0;
            i=1;
            while(a[j]>=p)
            {
                mile=10*i;
                p=p+30;
                i++;
            }
            total_mile+=mile;
        }

        for(j=0; j<n; j++)
        {
            p=0;
            i=1;
            while(a[j]>=p)
            {
                juice=15*i;
                p=p+60;
                i++;
            }
            total_juice+=juice;
        }
        if(total_juice>total_mile)
            printf("Case %d: Mile %d\n",cas,total_mile);
        else if(total_juice<total_mile)
            printf("Case %d: Juice %d\n",cas,total_juice);
        else
            printf("Case %d: Mile Juice %d\n",cas,total_juice);

    }
    return 0;
}
