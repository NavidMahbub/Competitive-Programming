#include<bits/stdc++.h>
#include<vector>
#include<string>
#include<queue>
#define PI acos(-1)

using namespace std;

int visited[100];
int cost[100];
int parent[100];
vector<int>edges[100];
queue <int> q;

void BFS(int node) {

    visited[node]=1;
    q.push(node);
    while(!q.empty()) {
        int u=q.front();
        q.pop();

        for(int i=0; i<edges[u].size(); i++) {
            int v=edges[u][i];

            if(visited[v]<=1) {
                visited[v]=visited[v]+1;
                //parent[v]=u;
                //cout<<v<<" p ==>> "<<u<<endl;
                cost[v]=cost[u]+1;
                q.push(v);
            }
        }
    }
}
int main() {
    //freopen("BFS.txt","r",stdin);
    int node,edge;
    cin>>node>>edge;
    for(int i=1; i<=edge; i++) {
        int u,v;
        cin>>u>>v;
        edges[u].push_back(v);
        edges[v].push_back(u);
    }

    int s,d;
    cin>>s>>d;
    BFS(s);


    return 0;
}

