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
int a[MAX];
int main() {

    ll n,s;
    while(sfll(n,s)==2) {
        rep(0,n) {
            in a[i];
        }
        ll l=0,r=0,cnt=0,mn=inf;

        while(r<=n) {
            if(cnt>=s) {
                if((r-l)<mn) {
                    mn = r-l;
                }
                cnt=cnt-a[l];
                l++;
            } else {
                cnt+=a[r++];
            }

        }
        if(mn==inf) {
            cout<<0;
            nl
        } else {
            cout<<mn;
            nl
        }
    }


    return 0;
}

