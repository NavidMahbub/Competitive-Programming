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
#define PI 		        acos(-1)
#define MAX 		    1000002
#define inf             2147483647
using namespace std;

int main() {
    int test;
    string s;
    in test;
    while(test--) {
        in s;

        rep(0,s.size()) {
            if(s[i]=='?') {
                if(i==0 or i==s.size()-1) {
                    if(i==0) {
                        if(s[i+1]=='0') {
                            s[i]='1';
                        } else {
                            s[i]='0';
                        }
                    } else {
                        if(s[i-1]=='0') {
                            s[i]='1';
                        } else {
                            s[i]='0';
                        }
                    }
                } else {
                    if( (s[i-1]!=s[i+1]) ) {
                        int j=i-1,cnt1=1,cnt2=1;
                        while(true) {
                            if((s[j]==s[j-1]) and j>0) {
                                cnt1++;
                            } else {
                                break;
                            }
                            j--;
                        }
                        j=i+1;
                        while(true) {
                            if((s[j]==s[j+1]) and j-1<s.size()) {
                                cnt2++;
                            } else {
                                break;
                            }
                            j++;
                        }
                        if(cnt1==cnt2) {
                            s[i]='1';
                        } else if(cnt1>cnt2) {
                            s[i]=s[i+1];
                        } else {
                            s[i]=s[i-1];
                        }
                    } else {
                        if(s[i-1]=='0') {
                            s[i]='1';
                        } else {
                            s[i]='0';
                        }
                    }
                }
            }
        }
        vector<int> v;
        int cnt1=1,m=0;
        rep(1,s.size()) {
            if(s[i]==s[i-1]) {
                cnt1++;
            }
            v.pb(cnt1);
            if(cnt1>m) {
                m=cnt1;
            }
            if(s[i]!=s[i-1]) {
                cnt1=1;
            }
        }
        v.pb(cnt1);
        if(cnt1>m) {
            m=cnt1;
        }

        out s<<" ==>> "<<m;
        nl
    }

    return 0;
}
