/**********************************************************\
*                  	  M@HBUB ALAM           		       *
*      MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY    *
*          	  Computer Science & Engineering               *
*      						    	                       *
\**********************************************************/
#include<bits/stdc++.h>
#define in 		        cin>>
#define out 		    cout<<
#define nl 		        cout<<endl;
#define ll 		        long long
#define pb       	    push_back
#define MS(a,b)         memset(a, b, sizeof (a))
#define sf(a)           scanf("%d", &a)
#define sff(a, b)       scanf("%d %d", &a, &b)
#define sfff(a, b, c)   scanf("%d %d %d", &a, &b, &c)
#define sfl(a)          scanf("%lld", &a)
#define sfll(a, b)      scanf("%lld %lld", &a, &b)
#define sflll(a, b, c)  scanf("%lld %lld %lld", &a, &b, &c)
#define READ()          freopen("input.txt", "r", stdin)
#define WRITE()         freopen("output.txt", "w", stdout)
#define rep(a,b) 	    for(int i=a;i<b;i++)
#define repj(a,b) 	    for(int j=a;j<b;j++)
#define repk(a,b) 	    for(int k=a;k<b;k++)
#define MAX 		    1000002
#define inf             2147483647
#define pii             pair<int,int>
using namespace std;
vector<int> adj[1000009],wt[1000009];
int vis[1000009],nn;


long long prims(int src) {
    priority_queue<pair<int,pii> >q;
    nn=1;
    long long mn_cost=0;
    for(int i=0; i<adj[src].size(); i++) {
        int u=src;
        int v=adj[src][i];
        int w=wt[src][i];
        q.push({-w,{-u,-v}});
    }

    vis[src]=1;

    while(!q.empty()) {
        int a=-(q.top().second.first);
        int b=-(q.top().second.second);
        int c=-(q.top().first);
        q.pop();
        //cout<<a<<" "<<b<<" "<<c<<endl;
        if(vis[b]==0) {
            for(int i=0; i<adj[b].size(); i++) {
                int u=b;
                int v=adj[b][i];
                int w=wt[b][i];
                if(vis[v]==0) {
                    q.push({-w,{-u,-v}});
                }
            }
            vis[b]=1;
            if(c>mn_cost) {
                mn_cost=c;
            }
            nn++;
        }
    }
    return mn_cost;
}
int main() {
    int m,n,u,v,w;
    while(cin>>n>>m) {
        if(!(m or n)) return 0;

        for(int i=0; i<=n+5; i++) {
            wt[i].clear();
            adj[i].clear();
        }
        memset(vis,0,sizeof(vis));

        while(m--) {
            cin>>u>>v>>w;
            adj[u].push_back(v);
            adj[v].push_back(u);
            wt[u].push_back(w);
            wt[v].push_back(w);
        }
        int ans=prims(u);
        if(n==nn) {
            cout<<ans<<endl;
        } else {
            cout<<"IMPOSSIBLE"<<endl;
        }
    }

    return 0;
}
