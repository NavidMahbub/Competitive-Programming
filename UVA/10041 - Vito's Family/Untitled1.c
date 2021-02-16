///                          ===>>	Problem Name : ***     ***
///                          ===>>	M@HBUB ALAM ,CSE,MBSTU.
///                          ===>>	Date : 27-April-2017

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,r;
    scanf("%d",&t);
    while(t--) {
        scanf("%d",&r);
        int a[r];

        int sum=0;
        for(int i=0; i<r; i++) {
            scanf("%d",&a[i]);
        }

        for(int i=1; i<r; i++) {
            sum+=abs(a[i]-a[i-1]);
        }
        cout<<sum<<endl;

    }

    return 0;
}


