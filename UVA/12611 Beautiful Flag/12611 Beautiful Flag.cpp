
///                          ===>>	Problem Name : ***     ***
///                          ===>>	M@HBUB ALAM ,CSE,MBSTU.
///                          ===>>	Date : 27-April-2017

#include<bits/stdc++.h>
using namespace std;

int main() {

    int t,r,cs=1;
    cin>>t;
    while(t--) {
        cin>>r;
        int lenth=r*5;
        int wid=(lenth*60)/100;
        wid = wid/2;
        int left=(lenth*45)/100;
        int right=lenth-left;
        printf("Case %d:\n",cs++);
        printf("-%d %d\n",left,wid);
        printf("%d %d\n",right,wid);
        printf("%d -%d\n",right,wid);
        printf("-%d -%d\n",left,wid);

    }
    return 0;
}
