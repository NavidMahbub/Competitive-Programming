#include<stdio.h>
int main()
{
    long long int l,rem,count,i,t;
    while(scanf("%lld",&l)==1)
    {

        if(l==0){return 0;}


        count=0;
        t=l;

        while(l!=0)
        {
            l/=2;
            count++;
        }

        int  ar[count];
        l=t;

       count=0;
       i=0;
       while(l!=0)
       {
           rem=l%2;
           if(rem==1)
           {
               count++;
           }
           ar[i]=rem;
           l=l/2;
           i++;
       }

    printf("The parity of ");
       for(t=i-1;t>=0;t--)
       {
          printf("%d",ar[t]);
       }


        printf(" is %lld (mod 2).\n",count);
    }
    return 0;
}
