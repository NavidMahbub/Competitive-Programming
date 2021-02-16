

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
using namespace std;

vector <int> adj[20009],ww[20009];
int cost[20009],chk;
queue<int>q;

void Diajkstra(int src, int dst) {
    q.push(src);
    cost[src]=0;
    while(!q.empty()) {
        int u=q.front();
        q.pop();

        for(int i=0; i<adj[u].size(); i++) {
            int v=adj[u][i];
            int cst=cost[u]+ww[u][i];
            if(v==dst){
                chk=1;
            }
            if(cost[v]>cst) {
                cost[v]=cst;
                q.push(v);
            }
        }
    }

}

int main() {
    int N,cs=0;
    in N;
    while(N--) {
        int u,v,w,n,s,t,m;
        in n>>m>>s>>t;

        rep(0,n) {
            adj[i].clear();
            ww[i].clear();
        }

        rep(0,m) {
            in u>> v >>w;
            adj[u].pb(v);
            adj[v].pb(u);
            ww[u].push_back(w);
            ww[v].push_back(w);
        }
        rep(0,n) {
            cost[i]=inf;
        }
        chk=0;
        Diajkstra(s,t);
        if(chk){
            cout<<"Case #"<<++cs<<": "<<cost[t];nl
        }else{
            cout<<"Case #"<<++cs<<": "<<"unreachable";nl
        }
    }

    return 0;
}

