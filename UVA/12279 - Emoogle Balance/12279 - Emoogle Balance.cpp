
///                          ===>>	Problem Name : ***     ***
///                          ===>>	M@HBUB ALAM ,CSE,MBSTU.
///                          ===>>	Date : 27-April-2017

#include<bits/stdc++.h>
using namespace std;

int main() {

    int n,cs=0;
    while(scanf("%d",&n)==1) {
        if(n==0) {
            return 0;
        }

        int a[n],cnt=0;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            if(a[i]==0){
               cnt++;
            }
        }

        printf("Case %d: %d\n",++cs,(n-cnt)-cnt);

    }
    return 0;
}
