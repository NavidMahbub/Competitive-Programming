#include<stdio.h>
int main()
{
    int cs=0,t;
    scanf("%d",&t);
    while(t--)
    {
        cs++;
        double c,f,r;
        scanf("%lf %lf",&c,&f);

        r=(5*(f))/9;
        printf("Case %d: %.2lf\n",cs,r+c);
    }
    return 0;
}