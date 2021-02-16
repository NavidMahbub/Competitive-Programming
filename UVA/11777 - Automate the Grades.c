#include<stdio.h>
int main()
{
    int t,cs=0;
    scanf("%d",&t);
    while(t--)
    {
        cs++;
        int a[7],i,min,sum,p,s=0;
        for(i=0; i<5; i++)
        {
            scanf("%d",&a[i]);
        }
        min=a[4];
        p=4;
        for(i=5; i<7; i++)
        {
            scanf("%d",&a[i]);
            if(a[i]<min)
            {
                min=a[i];
                p=i;
            }
        }
        a[p]=0;
        s=a[4]+a[5]+a[6];
        s=s/2;

        sum=a[0]+a[1]+a[2]+a[3]+s;

        if(sum>=90)
        {
            printf("Case %d: A\n",cs);
        }
        else if(sum<90 && sum>=80)
        {
            printf("Case %d: B\n",cs);
        }
        else if(sum>=70 && sum<80)
        {
            printf("Case %d: C\n",cs);
        }
        else if(sum>=60 && sum<70)
        {
            printf("Case %d: D\n",cs);
        }
        else
        {
            printf("Case %d: F\n",cs);
        }

    }
    return 0;
}
