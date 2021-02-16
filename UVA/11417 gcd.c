#include<stdio.h>
int hcf(int n1, int n2)
{
    if (n2 != 0)
        return hcf(n2, n1%n2);
    else
        return n1;
}
int main()
{
    int n,i,j,g=0;
    while(scanf("%d",&n))
    {
        if(n==0)
        {
            return 0;
        }
        for(i=1; i<n; i++)
        {
            for(j=i+1; j<=n; j++)
            {
                g+=hcf(i,j);
            }
        }
        printf("%d\n",g);
        g=0;
    }
    return 0;
}
