#include<stdio.h>
int main()
{
    int t,cs=0,n;
    scanf("%d",&t);
    while(t--)
    {
        cs++;
        scanf("%d",&n);
        int a[n],min,i;
        scanf("%d",&a[0]);
        min=a[0];
        for(i=1;i<n;i++)
        {
            scanf("%d",&a[i]);
            if(a[i]>min)
            {
                min=a[i];
            }
        }
        printf("Case %d: %d\n",cs,min);

    }
    return 0;
}
