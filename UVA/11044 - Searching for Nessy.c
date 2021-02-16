#include<stdio.h>
int main()
{
    int t,m,n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d %d",&n,&m);
        printf("%d\n",((m/3)*(n/3)));
    }
    return 0;
}