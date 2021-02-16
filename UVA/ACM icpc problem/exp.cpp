///                          ===>>	Problem Name : ***     ***
///                          ===>>	M@HBUB ALAM ,CSE,MBSTU.
///                          ===>>	Date : 03-April-2017

#include<bits/stdc++.h>
using namespace std;

int visited[1000];
int node,edge;

vector <char> v[1000];
    int rt=0;
int DFS(char  u ,char d) {

    visited[u]=1;
    if(u==d){
       rt=1;
    }
    for(char  i='a'; i<v[u].size()+97; i++) {
        char n=v[u][i];
        if(visited[n]!=1) {
            cout<<n<<" ";
            DFS(n,d);
        }
    }
    return rt;
}

int main() {

    cin>>edge;
    for(int i=1; i<=edge; i++) {
        char  u,n;
        cin>>u>>n;
        v[u].push_back(n);
        //v[n].push_back(u);
    }

    while(1) {
        char  src,desti;
        rt=0;
        cin>>src>>desti;
        int z=DFS(src,desti);

        if(z==1){
            cout<<"yes"<<endl;
        }else {
        cout<<"No"<<endl;
        }
    }


    return 0;
}
