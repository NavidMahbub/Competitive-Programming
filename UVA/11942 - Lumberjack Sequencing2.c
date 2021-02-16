#include<stdio.h>
int main()
{
    int t,a[10],f=0,i,j;
    scanf("%d",&t);
    while(t--)
    {
        int ac=0,dc=0;
        for(i=0;i<10;i++)
        {
            scanf("%d",&a[i]);
        }

        for(i=0;i<10;i++)
        {

            for(j=i+1;j<10;j++)
            {
                if(a[i]>a[j])
                {
                    ac++;
                }
            }
        }
        for(i=0;i<10;i++)
        {
            for(j=i+1;j<10;j++)
            {
                if(a[i]<a[j])
                {
                    dc++;
                }
            }
        }
        if(f==0)
        printf("Lumberjacks:\n");
        f++;
        if(ac==0 && dc==0)
        {
            printf("Ordered\n");
        }
        else
            printf("Unordered\n");
    }
}