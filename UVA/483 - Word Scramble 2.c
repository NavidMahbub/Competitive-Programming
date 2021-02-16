#include<stdio.h>

int main()
{
    long long int i,k,m;
    char str[1000000];
    while(gets(str))
    {
        for(i=0; str[i-1]!='\0'; i++)
        {
            if(str[i]==' ' || str[i]=='\0')
            {
                for(k=i-1; str[k]!=' '; k--)
                {
                    printf("%c",str[k]);
                    if(k==0)
                    {
                        break;
                    }
                }
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}

