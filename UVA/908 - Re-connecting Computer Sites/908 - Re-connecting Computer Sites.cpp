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
#define ms(a)         memset(a, 0, sizeof (a))
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
vector< pair<int,pii> > edge;
int k,nn;

struct DisjointSets {
    int *parent, *rnk;
    int n;
    DisjointSets(int n) {
        this->n = n;
        parent = new int[n+1];
        rnk = new int[n+1];

        for (int i = 0; i <= n; i++) {
            rnk[i] = 0;
            parent[i] = i;
        }
    }

    int find(int u) {
        if (u != parent[u])
            parent[u] = find(parent[u]);
        return parent[u];
    }
    void merge(int x, int y) {
        x = find(x), y = find(y);

        if (rnk[x] > rnk[y])
            parent[y] = x;
        else
            parent[x] = y;

        if (rnk[x] == rnk[y])
            rnk[y]++;
    }
};


int kruskal() {
    int mn_wght=0;
    sort(edge.begin(),edge.end());
    DisjointSets ds(nn);
    vector< pair<int,pii> >::iterator it;
    for(it=edge.begin(); it!=edge.end(); it++) {
        int u=it->second.first;
        int v=it->second.second;
        int a=ds.find(u);
        int b=ds.find(v);
        if(a!=b) {
            mn_wght+=it->first;
            ds.merge(a,b);
        }
    }
    return mn_wght;
}

int main() {
    int sum,a,b,c;
    while(sf(nn)==1) {
        sum=0;
        edge.clear();
        rep(1,nn) {
            sfff(a,b,c);
            sum+=c;
        }
        sf(k);
        rep(0,k) {
            sfff(a,b,c);
            edge.push_back({c,{a,b}});
        }
        int ans=kruskal();
        printf("%d\n%d\n",sum,ans);
    }
    return 0;
}

