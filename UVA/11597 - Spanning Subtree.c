#include<stdio.h>
int main()
{
    int n,i=0;
    while(scanf("%d",&n))
    {
        if(n==0){return 0;}
        i++;
        printf("Case %d: %d\n",i,n/2);
    }
    return 0;
}