#include<stdio.h>
#include<math.h>
int main()
{
    double n,p,i,ans=1;
    while(scanf("%lf%lf",&n,&p)==2)
    {
        ans=pow(p,(1.0/n));

       printf("%0.0lf\n",ans);

    }
    return 0;
}