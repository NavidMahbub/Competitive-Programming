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
#define pii 		    pair<int,int>
#define inf             2147483647
using namespace std;
int n,vis[100];
vector<int>edge[100],wt[100];

//vector<pair<int,pii> >edge;

void prims(int src) {
    priority_queue<pair<int,pii> > q,Q;
    //long long mn_cost=0;
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
            Q.push({-c,{-a,-b}});
        }
    }

    while(!Q.empty()) {
        int a=-(Q.top().second.first);
        int b=-(Q.top().second.second);
        int c=-(Q.top().first);
        Q.pop();

        if(a<=b){
            printf("%c-%c %d\n",a+65,b+65,c);
        }else{
            printf("%c-%c %d\n",b+65,a+65,c);

        }
        //cout<<a<<"-"<<b<<" "<<c<<endl;
    }
}


int main() {
    int test,m,cs=0;

    sf(test);
    while(test--) {
        sf(n);

        for(int i=0; i<=n+5; i++) {
            wt[i].clear();
            edge[i].clear();
        }
        memset(vis,0,sizeof(vis));


        rep(0,n) {
            repj(0,n) {
                cin>>m;
                if(j<n-1) {
                    char c;
                    //out j<<"  char de\n";
                    cin>>c;
                }
                if(m) {
                    edge[i].push_back(j);
                    wt[i].push_back(m);
                }
            }
        }

        cout<<"Case "<<++cs<<":\n";
        prims(0);
    }

    return 0;
}
