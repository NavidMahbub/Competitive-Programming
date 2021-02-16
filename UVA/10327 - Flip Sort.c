#include<stdio.h>
int main()
{
    int n,cnt=0,i,j;
    while(scanf("%d",&n)==1)
    {
        int a[n];
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
               if(a[i]>a[j])
               {
                   cnt++;
               }
            }
        }
        printf("Minimum exchange operations : %d\n",cnt);
        cnt=0;
    }
    return 0;
}