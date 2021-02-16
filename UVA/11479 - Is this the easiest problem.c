#include<stdio.h>
int main() {
    long long int t,a,b,c,cnt=0,d1,d2,d3;
    scanf("%lld",&t);
    while(t--) {
        cnt++;
        scanf("%lld%lld%lld",&a,&b,&c);
        d1=a-b;
        if(d1<0) {
            d1=-d1;
        }
        d2=b-c;
        if(d2<0) {
            d2=-d2;
        }
        d3=c-a;
        if(d3<0) {
            d3=-d3;
        }


        if(a==0 || b==0 || c==0)
            printf("Case %lld: Invalid\n",cnt);

        else if((d1>=c)|| (d1>=c)|| (d1>=c)|| (d2>=a)|| (d2>=a)|| (d2>=a)|| (d3>=b)|| (d3>=b)|| (d3>=b))
            printf("Case %lld: Invalid\n",cnt);

        else if(((a+b)>=c) && ((c+b)>=a) && ((a+c)>=b)) {
            if(a==b && b==c && c==a)
                printf("Case %lld: Equilateral\n",cnt);
            else if (a==b || b==c || c==a)
                printf("Case %lld: Isosceles\n",cnt);
            else
                printf("Case %lld: Scalene\n",cnt);
        } else
            printf("Case %lld: Invalid\n",cnt);
    }
    return 0;
}
