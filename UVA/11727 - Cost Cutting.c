#include<stdio.h>
#include<conio.h>
int main()
{
    long long int a,b,c,i,n;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%lld%lld%lld",&a,&b,&c);
        if((a>b && a<c) || (a <b && a >c))
            printf("%lld is middle number",a);
        else if((b>a && b<c) || ​​(b<a && b>c))
            printf("%lld is middle number",b);
        else if((c>a && c<b) ||(c<a && c>b))
            printf("%lld is middle number",c);
        else
        {
            printf("Wrong data entry");

        }
    }
    return 0;
}

