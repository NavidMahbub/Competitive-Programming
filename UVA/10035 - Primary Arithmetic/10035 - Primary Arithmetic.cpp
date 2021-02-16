
///                          ===>>	Problem Name : ***     ***
///                          ===>>	M@HBUB ALAM ,CSE,MBSTU.
///                          ===>>	Date : 27-March-2017

#include<bits/stdc++.h>
using namespace std;

int main() {

    int n,m,carry,cnt;
    while(1) {
        scanf("%d%d",&n,&m);
        if(n==0 & m==0) {
            return 0;
        }

        carry=0,cnt=0;
        while((n!=0) || (m!=0)) {
            int t1 = n % 10;
            int t2 = m % 10;
            n = n / 10;
            m = m / 10;
            int s = t1 + t2 + carry;
            carry = s / 10;
            if( carry > 0 ) {
                cnt++;
            }
        }


        if(cnt==0) {
            printf("No carry operation.\n");
        } else if (cnt==1){
            printf("%d carry operation.\n",cnt);
        }
        else{
            printf("%d carry operations.\n",cnt);
        }
    }

    return 0;
}
