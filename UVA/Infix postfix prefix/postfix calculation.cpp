
///                          ===>>	Problem Name : ***     ***
///                          ===>>	M@HBUB ALAM ,CSE_MBSTU.

#include<bits/stdc++.h>
using namespace std;
#define in cin>>
#define out cout<<
#define nl cout<<endl;
#define ll long long
#define rep(a,b) for(int i=a;i<b;i++)
#define repj(a,b) for(int j=a;j<b;j++)
#define repk(a,b) for(int k=a;k<b;k++)
#define brk break;
#define MAX 1000002
int r1,r2;
float calculate(char c) {

    if(c=='+') {
        return (r1+r2);
    } else if(c=='-') {
        return (r2-r1);
    } else if(c=='*') {
        return (r1*r2);
    } else if(c=='/') {
        return (r2/r1);
    }
}

int main() {
    stack <float> st;
    string s="24a/99^*1*235+*+";
    rep(0,s.size()) {
        if(isdigit(s[i]) || isalpha(s[i])) {
            int t=s[i]-'0';
            st.push(t);
        } else {
            if(!st.empty()) {
                r1=st.top();
                st.pop();
                r2=st.top();
                st.pop();
            }
            float result=calculate(s[i]);
            st.push(result);
        }
    }
    int x=st.top();
    out x;
    nl

    return 0;
}

