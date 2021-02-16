

///                          ===>>	Problem Name : ***     ***
///                          ===>>	M@HBUB ALAM ,CSE,MBSTU.
///                          ===>>	Date : 27-March-2017

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n;
    scanf("%d",&t);
    while(t--) {
        int a[100];
        scanf("%d",&n);
        for(int i=0; i<=9; i++) {
            a[i]=0;
        }
        for(int i=1; i<=n; i++) {
            int m=i;
            while(m!=0) {
                int t=m%10;
                a[t]++;
                m=m/10;
            }
        }
        for(int i=0; i<9; i++) {
            printf("%d ",a[i]);
        }
        printf("%d\n",a[9]);
    }

    return 0;
}
