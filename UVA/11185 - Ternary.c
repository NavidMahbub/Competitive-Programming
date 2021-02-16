#include<stdio.h>
int main()
{
    long long int n,rem,i,m,count;
    while(scanf("%lld",&n)==1)
    {
        m=0;count=0;
        if(n<0)
        {
            return 0;
        }
        while(n!=0)
        {
            count++;
            n=n/3;
        }

        long long array[count];

       for(i=0;i<count;i++)
        {
            rem=n%3;
            if(rem==1){m++;}
            array[i]=rem;
            n=n/3;
            //m=m+(rem * i);
            //i=i*10;
        }
        for(i=count-1;i>=0;i--)
        {
            printf("%lld",array[i]);
        }
        printf(" %lld",m);
    }
    return 0;
}
