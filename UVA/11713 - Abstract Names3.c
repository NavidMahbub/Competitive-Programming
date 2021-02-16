#include<stdio.h>

int lenth(char a[])
{
    int i,cnt=0;
    for(i=0;a[i]!='\0';i++)
    {
        cnt++;
    }
    return cnt;
}
int main()
{
    int t,i;
    scanf("%d",&t);
    while(t--)
    {
        char a[10000],b[10000];
        scanf("%s",a);
        scanf("%s",b);
        int la,lb,flag=0;;
        la=lenth(a);
        lb=lenth(b);
        if(la!=lb){printf("NO\n");}
        else
        {
            for(i=0;i<la;i++)
            {
                if(((a[i]!='a'|| a[i]!='e' || a[i]!='i' || a[i]!='o' || a[i]!='u')||(a[i]!='A'|| a[i]!='E' || a[i]!='I' || a[i]!='O' || a[i]!='U')) &&((b[i]!='a'|| b[i]!='e' || b[i]!='i' || b[i]!='o' || b[i]!='u')||(b[i]!='A'|| b[i]!='E' || b[i]!='I' || b[i]!='O' || b[i]!='U')))
                {
                    if(a[i]!=b[i])
                    {
                        printf("No\n");
                        flag=1;
                        break;
                    }
                    if(flag==1){break;}
                }
            }
            if(flag==0){printf("Yes\n");}
        }
    }
    return 0;
}