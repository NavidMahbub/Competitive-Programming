#include<stdio.h>
int main()
{
    int t,n,i,p;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int a[n];
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        int mile=0,juice=0,total_mile=0,total_juice=0;
        for(i=0; i<n; i++)
        {
            p=a[i];
            while(p>0)
            {
                p=p-29;
                mile=mile+10;
                p--;
            }
            total_mile+=mile;
        }
        for(i=0; i<n; i++)
        {
            p=a[i];
            while(p>0)
            {
                p=p-59;
                juice=juice+15;
                p--;
            }
            total_juice+=juice;
        }

        if(total_mile>total_juice)
        {
            printf("JUICE %d\n",total_juice);
        }
        if(total_mile<total_juice)
        {
            printf("MILE %d\n",total_mile);
        }
        if(total_mile==total_juice)
        {
            printf("MILE JUICE %d\n",total_juice);
        }
    }
    return 0;
}
