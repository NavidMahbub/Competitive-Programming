#include<stdio.h>

int main()
{
    int n,p,q,t,x=0;
    scanf("%d",&t);
    while(t--)
    {
        x++;
        scanf("%d%d%d",&n,&p,&q);
        int a[n],i,j,t,sum=0,r=0;
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

        for(i=0; i<n; i++)
        {
            if(sum>q || r>p){r--;break;}
            if(sum==q || r==p){break;}

            sum=a[i]+sum;
            r++;

            if(sum>q || r>p){r--;break;}
            if(sum==q || r==p){break;}
        }
        printf("Case %d: %d\n",x,r);
    }
    return 0;
}
