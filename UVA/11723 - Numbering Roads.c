#include<stdio.h>
int main()
{
    double n,m,i,c=0,x,p;
    int q;
    for(q=1; q<=10002; q++)
    {
        scanf("%lf%lf",&m,&n);
        if(m==0 && n==0)
        {
            return 0;
        }
        c++;
        p=m-n;
        i=p/n;
        x=(int)i;

        if(i!=x)
        {
            i=x+1;
        }
        if(m<n)
        {
            i=0;
        }

        if(i>26) printf("Case %.0lf: impossible\n",c);
        else
        {
            printf("Case %.0lf: %.0lf\n",c,i);
        }
    }
    return 0;
}
