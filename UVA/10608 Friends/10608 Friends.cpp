
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

int node,edge,visited[500009],cnt;
vector <int > v[30009];

int DFS(int u) {
    visited[u]=1;
    cnt++;
    for(int i=0; i<v[u].size(); i++) {
        int n=v[u][i];
        if(visited[n]!=1) {
            DFS(n);
        }
    }
    return cnt;
}
int main() {
    int test,u,n;
    in test;
    while(test--) {
        in node>>edge;
        for(int i=0; i<30005; i++) {
            v[i].clear();
        }
        memset(visited,0,sizeof(visited));
        for(int i=1; i<=edge; i++) {
            in u>>n;
            v[u].push_back(n);
            v[n].push_back(u);
        }
        int mx=0,r;
        cnt=0;
        mx=DFS(n);

        for(int i=1; i<=node; i++) {
            cnt=0;
            if(visited[i]==0) {
                r=DFS(i);
                if(r>mx) {
                    mx=r;
                }
                memset(visited,0,sizeof(visited));
            }
        }
        out mx;
        nl
    }
    return 0;
}
