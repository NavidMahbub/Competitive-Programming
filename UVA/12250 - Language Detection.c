#include<stdio.h>
int len(char a[])
{
    int i,cnt=0;
    for(i=0; a[i]!='\0'; i++)
    {
        cnt++;
    }
    return cnt;
}
int main()
{
    char a[500];
    int cs=0;
    while(gets(a))

    {
        cs++;
        int l;
        l=len(a);
        if(l==1 && a[0]=='#'){return 0;}

        if(a[0]=='H' && a[1]=='E' && a[2]=='L' && a[3]=='L' && a[4]=='O'){printf("Case %d: ENGLISH\n",cs);}
        else if(a[0]=='H' && a[1]=='O' && a[2]=='L' && a[3]=='A' ){printf("Case %d: SPANISH\n",cs);}
        else if(a[0]=='H' && a[1]=='A' && a[2]=='L' && a[3]=='L' && a[4]=='O'){printf("Case %d: GERMAN\n",cs);}
        else if(a[0]=='B' && a[1]=='O' && a[2]=='N' && a[3]=='J' && a[4]=='O' && a[5]=='U' && a[6]=='R'){printf("Case %d: FRENCH\n",cs);}
        else if(a[0]=='C' && a[1]=='I' && a[2]=='A' && a[3]=='O' ){printf("Case %d: ITALIAN\n",cs);}
        else if(a[0]=='Z' && a[1]=='D' && a[2]=='R' && a[3]=='A' && a[4]=='V' && a[5]=='S' && a[6]=='T'  && a[7]=='V' && a[8]=='U' && a[9]=='J' && a[10]=='T' && a[11]=='E'){printf("Case %d: RUSSIAN\n",cs);}
        else {printf("Case %d: UNKNOWN\n",cs);}
    }
    return 0;
}
