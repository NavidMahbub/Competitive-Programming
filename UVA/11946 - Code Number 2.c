#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
    int t,l,i,j;
    char a[1001],d[1];
    scanf("%d",&t);
    gets(d);
    for(j=1; j<=t; j++)
    {
        if(j!=1) printf("\n");
        while(gets(a)!='\0')
        {
            l=strlen(a);
            if(l==0) break;
            for(i=0; i<l; i++)
            {
                if(a[i]=='0') printf("O");
                else if(a[i]=='1') printf("I");
                else if(a[i]=='2') printf("Z");
                else if(a[i]=='3') printf("E");
                else if(a[i]=='4') printf("A");
                else if(a[i]=='5') printf("S");
                else if(a[i]=='6') printf("G");
                else if(a[i]=='7') printf("T");
                else if(a[i]=='8') printf("B");
                else if(a[i]=='9') printf("P");
                else printf("%c",a[i]);
            }
            printf("\n");
        }
    }
    return 0;
}
