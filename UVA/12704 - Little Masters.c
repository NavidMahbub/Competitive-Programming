#include<stdio.h>
#include<math.h>
int main()
{
     long long int  x,y,z;
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld%lld%lld",&x,&y,&z);
        printf("%.2f %.2f\n",(float)z-(sqrt(x*x+y*y)),(float)z+(sqrt(x*x+y*y)));

    }
    return 0;
}
