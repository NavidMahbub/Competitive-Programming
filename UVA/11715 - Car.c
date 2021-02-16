#include<stdio.h>
#include<math.h>
int main()
{
    double u,v,t,ans1,ans2;
    int n,cs=0;

    while(1)
    {
        cs++;
        scanf("%d",&n);
        if(n==0)
        {
            return 0;
        }
        scanf("%lf%lf%lf",&u,&v,&t);

        if(n==1)
        {
            ans1=(v-u)/t;
            ans2=(u*t)+(.5*ans1*t*t);
            printf("Case %d: %.3lf %.3lf\n",cs,ans2,ans1);
        }
        else if(n==2)
        {
            ans1=(v-u)/t;

            ans2=(u*ans1)+(.5*ans1*ans1*t);
            printf("Case %d: %.3lf %.3lf\n",cs,ans2,ans1);
        }

        else if(n==3)
        {
            ans1=sqrt((u*u)+2*t*v);
            ans2=(ans1-u)/v;
            printf("Case %d: %.3lf %.3lf\n",cs,ans1,ans2);
        }
        else
        {
            ans1=sqrt((u*u)-2*t*v);
            ans2=(u-ans1)/v;
            printf("Case %d: %.3lf %.3lf\n",cs,ans1,ans2);
        }
    }
    return 0;
}
