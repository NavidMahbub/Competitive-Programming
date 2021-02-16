#include<stdio.h>
int main()
{
    int n;

    while(scanf("%d",&n))
    {
        if(n==0)
        {
            return 0;
        }

        int i,d,a[n],t,j,flag=1;
        for(i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=0; i<n; i++)
        {
            for(j=i+1; j<n; j++)
            {
                if(a[i]>a[j])
                {
                    t=a[i];
                    a[i]=a[j];
                    a[j]=t;
                }
            }
        }


        for(i=0; i<n-1; i++)
        {
            if((a[i+1]-a[i]>200  ||  a[i+1]-a[i]<=121)|| a[0]!=0 )
            {
                printf("IMPOSSIBLE\n");
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            if(1422-a[n-1]>200)printf("IMPOSSIBLE\n");
            else
                printf("POSSIBLE\n");
        }

    }
    return 0;
}
