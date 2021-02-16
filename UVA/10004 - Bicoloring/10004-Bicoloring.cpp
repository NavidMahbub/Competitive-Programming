
///                          ===>>	Problem Name : *** UVA Bicolouring  ***
///                          ===>>	M@HBUB ALAM ,CSE,MBSTU.
///                          ===>>	Date : 03-April-2017

#include<bits/stdc++.h>
#include<vector>
#include<queue>

using namespace std;
int visited[210];
int color[210];
int node,edge,c;
vector <int > edges[210];



void BFS(int n) {
    visited[n]=1;
    color[n]=1;
    queue<int >q;
    q.push(n);
    while(!q.empty()) {
        int u=q.front();
        q.pop();

        for(int i=0; i<edges[u].size(); i++) {
            int v=edges[u][i];
            int w1=0,w2=0;

            for(int j=0; j<edges[v].size(); j++) {
                int t=edges[v][j];
                if(color[t]==1) {
                    w1=1;
                }
                if(color[t]==2) {
                    w2=1;
                }
            }
            if(w1==1 && w2==1) {
                c=3;
            } else if(w1==0 && w2==1) {
                c=1;
            } else if(w1==1 && w2==0) {
                c=2;
            } else if(w1==0 && w2==0) {
                c=1;
            }
            if(color[v]==0) {
                color[v]=c;
            }

            if(visited[v]==0) {
                visited[v]=1;
                q.push(v);
            }
        }
    }
    return ;
}

int main() {
    int aa[5000][5000];
    memset(aa,0,sizeof(aa));

    while(scanf("%d",&node)==1) {
        if(node==0) {
            return 0;
        }

        scanf("%d",&edge);
        for(int i=0;i<210;i++){
            edges[i].clear();
        }

        memset(visited,0,sizeof(visited));
        memset(color,0,sizeof(color));
        int u,y;

        for(int i=0; i<edge; i++) {
            scanf("%d%d",&u,&y);
            edges[u].push_back(y);
            edges[y].push_back(u);
        }
        BFS(edges[u][0]);
        int z=1;
        for(int i=0; i<=node; i++) {
            if(color[i]>2) {
                z=0;
                printf("NOT BICOLORABLE.\n");
                break;
            }
        }
        if(z==1) {
            printf("BICOLORABLE.\n");
        }
    }

    return 0;
}

