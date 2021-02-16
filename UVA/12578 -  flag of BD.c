#include<stdio.h>
int main()
{
    double radious,length,width,red,green;
    long long int n,i;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lf",&length);
        radious=length/5;
        red=3.1415926535897932*(radious*radious);
        width=(6*length)/10;
        green=(length*width)-red;
        printf("%.2lf %.2lf\n",red,green);
    }
    return 0;
}
