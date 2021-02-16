#include<stdio.h>
int main()
{
    int t,i,p=0,j;
    char a[1000];
    scanf("%d",&t);
    getchar();
    for(j=1; j<=t; j++)
    {
        gets(a);
            for(i=0; a[i]!='\0'; i++)
            {
                if(a[i]=='0')
                {
                    printf("O");
                }
                else if(a[i]=='1')
                {
                    printf("I");
                }
                else if(a[i]=='2')
                {
                    printf("Z");
                }
                else if(a[i]=='3')
                {
                    printf("E");
                }
                else if(a[i]=='4')
                {
                    printf("A");
                }
                else if(a[i]=='5')
                {
                    printf("S");
                }
                else if(a[i]=='6')
                {
                    printf("G");
                }
                else if(a[i]=='7')
                {
                    printf("T");
                }
                else if(a[i]=='8')
                {
                    printf("B");
                }
                else if(a[i]=='9')
                {
                    printf("P");
                }
                else
                    printf("%c",a[i]);
            }
            printf("\n");


    }

    return 0;
}
