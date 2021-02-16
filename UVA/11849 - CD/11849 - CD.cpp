///                          ===>>	Problem Name : ***     ***
///                          ===>>	M@HBUB ALAM ,CSE,MBSTU.
///                          ===>>	Date : 27-April-2017

///////    Time limit

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m,cnt;
    while(scanf("%d%d",&n,&m)==2) {
        if(n==0 && m==0) {
            return 0;
        }

        int a[n],b[m];
        for(int i=0; i<n; i++) {
            scanf("%d",&a[i]);
        }

        for(int i=0; i<m; i++) {
            scanf("%d",&b[i]);
        }
        cnt=0;
        if(n>m) {
            for(int i=0; i<n; i++) {
                int *p;
                p=find(b,b+m,a[i]);
                if(p!=b+m) {
                    cnt++;
                }
            }
        } else {
            for(int i=0; i<m; i++) {
                 int *p;
                p=find(a,a+n,b[i]);
                if(p!=a+n) {
                    cnt++;
                }
            }
        }
        printf("%d\n",cnt);
    }

    return 0;
}
