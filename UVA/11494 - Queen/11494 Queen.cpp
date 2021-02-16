
///                          ===>>	Problem Name : ***   Quene  ***
///                          ===>>	M@HBUB ALAM ,CSE_MBSTU

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
    int x1,y1,x2,y2,a[9][9];
    while(in x1>>y1>>x2>>y2) {
        if(!(x1 and y1 and x2 and y2)) return 0;

        memset(a,0,sizeof(a));
        rep(1,9) {
            a[y1][i]=1;
            a[i][x1]=1;
        }

        rep(1,9) {
            int s=y1-i,t=x1-i;
            if(s>0 && s<9 && t>0 && t<9) {
                a[s][t]=1;
            }
            s=y1+i,t=x1+i;
            if(s>0 && s<9 && t>0 && t<9) {
                a[s][t]=1;
            }
            s=y1-i,t=x1+i;
            if(s>0 && s<9 && t>0 && t<9) {
                a[s][t]=1;
            }
            s=y1+i,t=x1-i;
            if(s>0 && s<9 && t>0 && t<9) {
                a[s][t]=1;
            }
        }

        if(x1==x2 and y1==y2) {
            out "0\n";
        } else if(a[y2][x2]) {
            out "1\n";
        } else {
            out "2\n";
        }
    }
    return 0;
}
