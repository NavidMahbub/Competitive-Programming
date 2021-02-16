#include<stdio.h>
/*int hcf(int n1, int n2)
{
    if (n2 != 0)
        return hcf(n2, n1%n2);
    else
        return n1;
}*/
int mian()
{
    int n;
    while(scanf("%d",&n))
    {
        if(n==0)
        {
            return 0;
        }

        int i,j,g=0;
        for(i=1; i<n; i++)
        {
            for(j=i+1; j<=n; j++)
            {
                //g=g+hcf(i,j);
            }
        }
        printf("%d\n",g);
    }
    return 0;
}
