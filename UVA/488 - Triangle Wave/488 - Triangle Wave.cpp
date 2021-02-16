
///                          ===>>	Problem Name : ***     ***
///                          ===>>	M@HBUB ALAM ,CSE,MBSTU.
///                          ===>>	Date : 27-March-2017

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n,m;
    scanf("%d",&t);
    for(int y=1; y<=t; y++) {
        scanf("%d%d",&n,&m);
        int k,i;
        for(i=1; i<=m; i++) {

            for(int j=1; j<=n; j++) {
                for(int k=1; k<=j; k++) {
                    printf("%d",j);
                }
                printf("\n");
            }

            for(int j=n-1; j>=1; j--) {
                for(k=j; k>=1; k--) {
                    printf("%d",j);
                }
                printf("\n");
            }
            if(y==t && i==m) {
                break;
            } else {
                printf("\n");
            }
        }
    }

    return 0;
}
