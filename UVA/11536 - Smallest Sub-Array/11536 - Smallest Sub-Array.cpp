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
#define MAX 		    1000009
#define inf             2147483647
using namespace std;
int a[MAX],t[105];
int main() {
    ll test,cs=0;
    in test;
    while(test--) {
        ll n,m,k;
        in n>>m>>k;
        memset(t, 0, sizeof (t));
        a[1]=1;
        a[2]=2;
        a[3]=3;

        for(ll i=4; i<=n; i++) {
            a[i] = ( (a[i-1] + a[i-2] + a[i-3] )%m)+1;
        }
        ll l=0,r=0,cnt=0,mn=inf;


        while(r<=n) {
            if(cnt==k) {
                if((r-l)<mn) {
                    mn = r-l;
                }
                if(a[l]<=k and a[l]>0) {
                    if(t[a[l]]<=1) {
                        t[a[l]]--;
                        cnt--;
                    } else {
                        t[a[l]]--;
                    }
                }
                l++;
            } else if(a[r]<=k and a[r]>0) {
                if(t[a[r]]<=0) {
                    t[a[r]]++;
                    cnt++;
                } else {
                    t[a[r]]++;
                }
                r++;
            } else {
                r++;
            }


            if(r>n) {
                if(cnt==k) {
                    if((r-l-1)<mn) {
                        mn = r-l-1;
                    }
                }
            }
        }
        if(mn==inf) {
            cout<<"Case "<<++cs<<": "<<"sequence nai";
            nl
        } else {
            cout<<"Case "<<++cs<<": "<<mn;
            nl
        }
    }


    return 0;
}
