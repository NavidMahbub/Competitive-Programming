
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
    vector<int> v;
    int n;
    while(in n ) {
        v.push_back(n);
        int siz = v.size();
        sort(v.begin(),v.end());
        if(siz % 2) {
            n=siz / 2;
            out v[n];nl
        } else {
            n=(siz/2);
            int t=(v[n]+v[n-1])/2;
            out t;nl
        }
    }
    return 0;
}
