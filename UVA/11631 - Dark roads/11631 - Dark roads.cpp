/**********************************************************\
*                  	  M@HBUB ALAM           		       *
*      MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY    *
*          	  Computer Science & Engineering               *
*      						    	                       *
\**********************************************************/
#include<bits/stdc++.h>
//#define in 		        cin>>
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

vector<pair<int,pii>>edges;


struct Graph {
    int node,edg;
    Graph(int r, int t) {
        node=r,edg=t;
    }
    void addEdge(int u,int v,int w) {
        edges.push_back({w,{u,v}});
    }
    int kruskal();
};

struct DisjointSets {
    int *parent,*rnk;
    int nd;
    DisjointSets(int nd) {
       this-> nd=nd;
        parent=new int[nd+1];
        rnk=new int[nd+1];
        for(int i=0; i<=nd; i++) {
            parent[i]=i;
            rnk[i]=0;
        }
    }
    int find(int a) {
        if(a!=parent[a]) {
            parent[a]=find(parent[a]);
        }
        return parent[a];
    }
    void merge(int x,int y) {
        x=find(x),y=find(y);
        if(rnk[x]>rnk[y]) {
            parent[y]=x;
        } else {
            parent[x]=y;
        }
        if(rnk[x]==rnk[y]) {
            rnk[y]++;
        }
    }
};

int Graph::kruskal(){
    sort(edges.begin(),edges.end());
    DisjointSets ds(node);
    vector<pair<int,pii>>::iterator it;

    int mn_cost=0;
    for(it=edges.begin();it!=edges.end();it++){
        int u=it->second.first;
        int v=it->second.second;

        int st_u=ds.find(u);
        int st_v=ds.find(v);

        if(st_u!=st_v){
            mn_cost+=it->first;
            cout<<u<<" "<<v<<" "<<it->first<<endl;
            ds.merge(st_u,st_v);
        }
    }
    return mn_cost;

}

int main() {
    int n,m,a,b,c,sum;
    while(cin>>n>> m) {
        if(n==0 and m==0){return 0;}
        Graph  gr(n,m);
        edges.clear();
        sum=0;
        while(m--) {
            cin>> a>>b>>c;
            sum+=c;
            gr.addEdge(a,b,c);
        }

        int mn_cost=gr.kruskal();
        out sum-mn_cost;
        out mn_cost;
        nl
    }

    return 0;
}
