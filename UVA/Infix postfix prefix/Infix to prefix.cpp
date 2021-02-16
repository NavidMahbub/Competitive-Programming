

///                          ===>>	Problem Name : ***     ***
///                          ===>>	M@HBUB ALAM ,CSE,MBSTU.
///                          ===>>	Date : 27-March-2017

#include<bits/stdc++.h>
using namespace std;
#define in cin>>
#define ll long long
#define nl cout<<endl;
#define out cout<<
#define rep(a,b) for(int i=a;i<b;i++)
#define brk break;
#define MAX 1000002

int main() {
    stack<char> st;
    map<char,int> mp;
    string s,prefix;
    mp['^']=3;
    mp['*']=2;
    mp['/']=2;
    mp['+']=1;
    mp['-']=1;
    mp['(']=0;
    mp[')']=0;
    in s;//(2*(4/a)^99*1+2*(3+5))
    reverse(s.begin(),s.end());
    rep(0,s.size()) {
        if(isdigit(s[i]) || isalpha(s[i])) {
            prefix+=s[i];
        } else {
            if(s[i]!='(') {

                if(st.empty()) st.push(s[i]);
                else {
                    if(s[i]==')')st.push(s[i]);
                    else {
                        while(mp[st.top()]>=mp[s[i]] && st.top()!='(') {
                            prefix+=st.top();
                            st.pop();
                        }
                        st.push(s[i]);
                    }
                }
            } else {
                while(st.top()!=')') {
                    prefix+=st.top();
                    st.pop();
                }
                st.pop();
            }
        }
    }
    while(!st.empty()) {
        prefix+=st.top();
        st.pop();
    }
    reverse(prefix.begin(),prefix.end());

    out prefix;
    nl

    return 0;
}

