#include<stdio.h>
#include<string.h>
int power(int n)
{
    int ans=1,i;
    for(i=1; i<=n; i++)
    {
        ans=ans*2;
    }
    return ans;
}
int main()
{
    char s[1000];

    while( gets(s))
    {

        int l=strlen(s);

        int i,p=1,n,num=0,powe;
        for(i=l-1; i>=0; i--)
        {
            n=s[i]-'0';
            powe=power(p);
            num=num+(n*(powe-1));
            p++;
        }
        if(l=1 && s[0]=='0'){return 0;}
        printf("%d\n",num);
    }
    return 0;
}
