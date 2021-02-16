#include<stdio.h>
int main()
{
    long long int m,i,c=0;
    double x,y,r;
    scanf("%lld",&m);
    for(i=1;i<=m;i++)
    {
        c++;
       scanf("%lf%lf",&x,&y);
       r=(0.5557142857142857142857142857*y)+x;
        printf("Case %lld: %0.2lf\n",c,r);
    }
    return 0;
}


