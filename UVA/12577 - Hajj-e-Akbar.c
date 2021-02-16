#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    int cs=0;
    while(gets(str))
    {
        cs++;
        int l=strlen(str);
        if(l==1 && str[0]=='*'){return 0;}
        if(str[0]=='H' && str[1]=='a' && str[2]=='j' && str[3]=='j')
        {
            printf("Case %d: Hajj-e-Akbar\n",cs);
        }
        if(str[0]=='U' && str[1]=='m' && str[2]=='r' && str[3]=='a' && str[4]=='h')
        {
            printf("Case %d: Hajj-e-Asghar\n",cs);
        }
    }
    return 0;
}