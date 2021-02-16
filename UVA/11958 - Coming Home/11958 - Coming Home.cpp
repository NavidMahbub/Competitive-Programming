

///                          ===>>	Problem Name : ***  AC   ***
///                          ===>>	M@HBUB ALAM ,CSE,MBSTU.
///                          ===>>	Date : 27-March-2017

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,H,M,n,mini,h,m,tm,cs=1,mi,hour;
    char c;
    scanf("%d",&t);

    while(t--) {
        scanf("%d",&n);
        scanf("%d%c%d",&H,&c,&M);
        mini=50000;

        for(int i=0; i<n; i++) {
            scanf("%d%c%d%d",&h,&c,&m,&tm);

            mi=(m>=M)?(m-M):((m+60)-M);
            if(m<M)h--;
            hour=(h>=H)?(h-H):((h+24)-H);
            tm+=(hour*60)+mi;
            if(tm<mini)mini=tm;

        }
        printf("Case %d: %d\n",cs++,mini);
    }
    return 0;
}
