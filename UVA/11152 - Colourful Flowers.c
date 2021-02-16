#include<stdio.h>
#include<math.h>
int main()
{
   float  a1,a2,a3,a,b,c,p,q,r,k;
    while(scanf("%f%f%f",&a,&b,&c)==3)
    {
       if(a>=b)
       {
           if(b>=c)
           {
              p=a;q=b;r=c;
           }
           else
           {
               if (a>=c)
               {
                   p=a;q=b;r=c;
               }
               else
               {
                   p=c;q=b;r=a;
               }
           }
       }
       else
       {
           if (b<=c)
           {
               p=c;q=b;r=a;
           }
           else
           {
               p=b;q=a;r=c;
           }
       }
       k=(p+q+r)/2;
       a3=sqrt((k-p)*(k-q)*(k-r)/k);
       a2=sqrt(k*(k-p)*(k-q)*(k-r))-a3;
       a1=(3.1416*((p*p)/4))-(sqrt(k*(k-p)*(k-q))*(k-r));
       printf("%f  %f  %f \n",a1,a2,a3);
    }
    return 0;
}
