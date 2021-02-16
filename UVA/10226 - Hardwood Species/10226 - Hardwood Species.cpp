#include<bits/stdc++.h>
using namespace std;
int main() {

    int test,t=0,m=0;
    cin>>test;
    test++;
    getchar();
    int d=0;
    map<string,int> mp;
    while(test) {
        string a;
        getline(cin,a);
        if( !(a.size() )) {
            test--;
            if(t) {
                if(t>1)
                cout<<endl;
                float q = 100.0000/d;
                for(std::map<string,int>::iterator it=mp.begin(); it!=mp.end(); it++ ) {
                    cout<<it->first<<" ";
                    printf("%.4f",(it->second)*q);
                    cout<<endl;
                }

                d=0;
                mp.clear();
            }
            t++;
        } else {
            d++;
            if(mp[a]==0) {
                mp[a]=1;
            } else {
                mp[a]++;
            }
        }
    }
    return 0;
}
