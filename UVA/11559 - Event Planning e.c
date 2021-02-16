#include <stdio.h>
#include <stdlib.h>

int main()
{
    long long  int n,b,hotel,week,j;
    while(scanf("%lld%lld%lld%lld",&n,&b,&hotel,&week)==4)
    {
        long long int a[hotel],B[week],i,min=b,flag=0,cost;
        for(i=0; i<hotel; i++)
        {
            scanf("%lld",&a[i]);
            for(j=0; j<week; j++)
            {
                scanf("%lld",&B[j]);
                if(B[j]>=n)
                {
                    cost = a[i]*n;
                    if(cost<=min)
                    {
                        min=cost;
                        flag=1;
                    }
                }
            }
        }
        if(min<=b && flag==1)
        printf("%lld\n",min);
        else
        printf("stay home\n");
    }
    return 0;
}
