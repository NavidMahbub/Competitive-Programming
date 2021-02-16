#include<bits/stdc++.h>
using namespace std;
int main() {

    int n;
    while(cin>>n) {
        if(n==0) {
            return 0;
        }
        queue<int>q;
        for(int i=1; i<=n; i++) {
            q.push(i);
        }

        if(n==1) {
            cout<<"Discarded cards:";
            cout<<endl<<"Remaining card: "<<1<<endl;
        } else {
            cout<<"Discarded cards: "<<q.front();
            q.pop();
            if(!q.empty()) {
                int t=q.front();
                q.push(t);
                q.pop();
            }

            while(!q.empty()) {
                int p=q.front();
                q.pop();

                if(q.empty()) {
                    cout<<endl<<"Remaining card: "<<p<<endl;
                    break;
                } else {
                    cout<<", "<<p;
                    int t=q.front();
                    q.push(t);
                    q.pop();
                }
            }
        }

    }

    return 0;
}
