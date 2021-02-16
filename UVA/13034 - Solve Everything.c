#include<stdio.h>
int main()
{
    int t,cs=0;
    scanf("%d",&t);
    while(t--)
    {
        cs++;
        int a[13],i,cnt=1;
        for(i=0; i<13; i++)
        {
            scanf("%d",&a[i]);
            if(a[i]==0)
            {
                cnt=0;
            }
        }
        if(cnt==1)
        {
            printf("Set #%d: Yes\n",cs);
        }
        else
        {
            printf("Set #%d: No\n",cs);
        }
    }
    return 0;
}
