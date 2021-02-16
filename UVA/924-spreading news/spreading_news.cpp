#include<bits/stdc++.h>
using namespace std;
int e,vis[2600],day[12600],m;
vector<int> edges[2600];

int  bfs(int src){
	memset(vis,0,sizeof(vis));
	memset(day,0,sizeof(day));

	vis[src]=1;
	int max=0;
	queue<int>q;
	day[src]=1;

	q.push(src);
	int cnt=0;
	int DAY=0;
	int child=1;

	while(!q.empty()){
		child--;
		src=q.front();
		q.pop();
		int v;

		for(int i=0;i<(int)edges[src].size();i++){
			v=edges[src][i];

			if(vis[v]==0){
				day[v]=day[src]+1;
				vis[v]=1;
				cnt++;
				q.push(v);
			}
		}
		if(child==0){
            child=cnt;
            DAY++;
            if(cnt>max){
                max=cnt;
                m=DAY;
            }
            cnt=0;
		}
	}
	return max;
}

int main(){
	while(cin>>e){

		for(int i=0;i<2600;i++){
				edges[i].clear();
			}
		for(int i=0;i<e;i++){
			int n;
			cin>>n;

			for(int j=0;j<n;j++){
				int frnd;
				cin>>frnd;
				edges[i].push_back(frnd);
			}
		}

		int query,str;
		cin>>query;
		while(query--){
			cin>>str;
			int ans=bfs(str);
			if(ans){
				cout<<ans<<" "<<m<<endl;
			}else{
				cout<<ans<<endl;
			}
		}
	}
}
