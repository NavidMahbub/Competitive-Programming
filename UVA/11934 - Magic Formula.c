#include<stdio.h>
int main()
{
    int a,b,c,d,l,x,r;

    while(scanf("%d%d%d%d%d",&a,&b,&c,&d,&l))
    {
        if(a==0 && b==0 && c==0 && d==0 && l==0){return 0;}


        int cnt=0;

        for(x=0;x<=l;x++)
        {
            r=(a*x*x)+(b*x)+c;
            if(r%d==0)
            {
                cnt++;
            }
        }

        printf("%d\n",cnt);
    }
    return 0;
}