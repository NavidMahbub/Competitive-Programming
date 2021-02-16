#include<stdio.h>
int main() {
    long long int n,fact=1,i;
    while(scanf("%lld",&n)==1) {
        fact=1;
        if(n<0) {
            n=-n;
        }
        for(i=1; i<=n; i++) {
            fact=fact*i;
        }

        if(fact<10000) {
            printf("Underflow!\n");

        } else if((fact>10000 && fact<6227020800)) {
            printf("%lld\n",fact);
        } else if (fact>6227020800) {
            printf("Overflow!\n");
        }
    }
    return 0;
}
