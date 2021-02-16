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
int m,n;
vector<pair<int,pii> >edge;


struct Disjointset{

    int x;
    int *parent,*rnk;
    Disjointset(int a){
        x=a;
        parent=new int[a+1];
        rnk=new int[a+1];

        for(int i=0;i<=a;i++){
            parent[i]=i;
            rnk[i]=0;
        }
    }

    int find(int u){
        if(u!=parent[u]){
            parent[u]=find(parent[u]);
        }
        return parent[u];
    }

    void unionn(int a,int b){
        a=find(a),b=find(b);

        if(rnk[a]>rnk[b]){
            parent[b]=a;
        }else{
            parent[a]=b;
        }
        if(rnk[a]==rnk[b]){
            rnk[b]++;
        }
    }
};

void kruskal(){

    sort(edge.begin(),edge.end());
    Disjointset ds(n);
    vector<pair<int,pii> >:: iterator it;
    int cnt=1,chk=1;

    for(it=edge.begin();it!=edge.end();it++){

        int a=it->second.first;
        int b=it->second.second;
        int c=it->first;
        int pr_a=ds.find(a),pr_b=ds.find(b);

        if(pr_a!=pr_b){
            ds.unionn(pr_a,pr_b);
        }else{
            if(cnt==1){
                cout<<c;
            }else{
                cout<<" "<<c;
            }
            cnt=2;
            chk=0;
        }
    }

    if(chk){
        cout<<"forest";
    }
    nl
}


int main() {
    int u,v,w;
    while(cin>>n>>m){
        if(!(m or n)) return 0;
        edge.clear();
        while(m--){
            cin>>u>>v>>w;
            edge.push_back({w,{u,v}});
        }
        kruskal();
    }
    return 0;
}
