#include<stdio.h>
long long int lenth(char str1[])
{
    long long int  i=0,c=0;
    while(str1[i]!='\0')
    {
        i++;
        c++;
    }
    return c;
}

int main()
{
    long long int i,k,m,flag;
    char str[1000000];
    while(gets(str))
    {
        flag=0;
        m=lenth(str);

        for(i=0; i<=m; i++)
        {
            if(str[i]==' ' || str[i]=='\0')
            {
                if(str[i]=='\0')
                {
                    flag=3;
                }
                for(k=i-1; str[k]!=' '; k--)
                {
                    printf("%c",str[k]);
                    if(k==0)
                    {
                        break;
                    }
                }
                if(flag!=3)
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

