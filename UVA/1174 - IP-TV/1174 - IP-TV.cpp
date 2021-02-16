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
#define pii             pair<int,int>
#define inf             2147483647
using namespace std;

vector<int>edge[20009];
vector<int>wt[20009];
int vis[20009],n;


long long prims(int src) {
    priority_queue<pair<int,pii> >q;
    long long mn_cost=0;
    for(int i=0; i<edge[src].size(); i++) {
        int u=src;
        int v=edge[src][i];
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
            for(int i=0; i<edge[b].size(); i++) {
                int u=b;
                int v=edge[b][i];
                int w=wt[b][i];
                if(vis[v]==0) {
                    q.push({-w,{-u,-v}});
                }
            }
            vis[b]=1;
            mn_cost+=c;
        }
    }
    return mn_cost;
}
int main() {

    int test,m,w,cs=1;
    cin>>test;
    map<string,int>mp;

    while(test--) {
        mp.clear();
        string a,b;
        int cntr=1;
        for(int i=0;i<=n+5;i++){
            wt[i].clear();
            edge[i].clear();
        }


        memset(vis,0,sizeof(vis));
        cin>>n>>m;

        while(m--) {
            cin>>a>>b>>w;
            if(mp[a]==0) {
                mp[a]=cntr++;
            }
            if(mp[b]==0) {
                mp[b]=cntr++;
            }

            int uu=mp[a],vv=mp[b];
            edge[uu].push_back(vv);
            edge[vv].push_back(uu);
            wt[uu].push_back(w);
            wt[vv].push_back(w);
        }
        int aa=mp[a];
        int ans=prims(aa);
        if(cs==1){
            cout<<ans<<endl;
        }else{
            cout<<endl<<ans<<endl;
        }
        cs=2;
    }
    return 0;
}


