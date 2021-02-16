
///                          ===>>	Problem Name : ***     ***
///                          ===>>	M@HBUB ALAM ,CSE,MBSTU

#include<bits/stdc++.h>
using namespace std;
#define in cin>>
#define out cout<<
#define nl cout<<endl;
#define ll long long
#define rep(a,b) for(int i=a;i<b;i++)
#define repj(a,b) for(int j=a;j<b;j++)
#define repk(a,b) for(int k=a;k<b;k++)
#define MAX 1000002

int main() {
    ll z,i,m,l,cs=0;
    while(in z>>i>>m>>l) {


        if(!(z || i || m || l)) {
            return 0;
        }
        ll cnt=0;
        ll f=(z*l+i)%m;
        l=f;

        while(1) {
            l=(z*l+i)%m;
            cnt++;
            if(l==f) {
                break;
            }
        }
        out "Case "<<++cs<<": "<<cnt;
        nl

    }

    return 0;
}
