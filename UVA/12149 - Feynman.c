#include<stdio.h>
int main()
{
    int n,p;
    while ( scanf("%d",&n)==1)
    {
        if (n==0){break;}
        if(n>=1 && n<=100)
        {
         p=(n*(n + 1)*(2*n + 1))/6;
        printf("%d\n",p);
        }
    }
    return 0;
}
