#include<stdio.h>
int main()
{
    int d,m,y,dd,mm,yy,t,ry,rd,rm,cs=0;
    char b,c;
    scanf("%d",&t);
    while(t--)
    {
        cs++;
        scanf("%2d%c%2d%c%4d",&dd,&b,&mm,&c,&yy);
        scanf("%2d%c%2d%c%4d",&d,&b,&m,&c,&y);


        if(dd>=d)
        {
            rd=dd-d;
        }
        if(dd<d)
        {
            mm--;
            rd=dd+30-d;
        }
        if(mm>=m)
        {
            rm=mm-m;
        }
        if(mm<m)
        {
            yy--;
            rm=mm+12-m;
        }
        ry=yy-y;
        if(ry<0)
            printf("Case #%d: Invalid birth date\n",cs);
        else if(ry>130)
            printf("Case #%d: Check birth date\n",cs);
        else
            printf("Case #%d: %d\n",cs,ry);


    }

    return 0;
}
