#include<bits/stdc++.h>
using namespace std;
int main() {

    int n,cs=0;
    while(cin>>n) {
        getchar();
        int cool=0;
        while(n--) {
            string s;0
            vector<int> v;
            cin>>s;
            for(int i=0; i<s.size(); i++) {
                int cnt=0;
                if(s[i]!='1') {
                    for(int j=i+1; j<s.size(); j++) {
                        if(s[j]!='1') {
                            if(s[i]==s[j]){
                                cnt++;
                                s[j]='1';
                            }
                        }
                    }
                    s[i]='1';
                    v.push_back(cnt);
                }
            }
            sort(v.begin(),v.end());
            int chk=1;
            for(int i=1; i<v.size(); i++){
                if(v[i]==v[i-1]){
                    chk=0;
                    break;
                }
            }
            if(chk and v.size()>1){
                cool++;
            }
        }

        cout<<"Case "<<++cs<<": "<<cool<<endl;
    }
    return 0;
}
