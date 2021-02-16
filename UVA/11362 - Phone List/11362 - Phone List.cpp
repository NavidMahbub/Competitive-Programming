/**********************************************************\
*                  	  M@HBUB ALAM           		       *
*      MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY    *
*          	  Computer Science & Engineering               *
*      						    	                       *
\**********************************************************/
#include<bits/stdc++.h>
#define in 		        cin>>
#define out 		    cout<<
#define pr      		printf
#define nl 		        cout<<endl;
#define ll 		        long long
#define pb       	    push_back
#define MS(a)           memset(a, 0, sizeof (a))
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
#define MAX 		    1000002
#define inf             2147483647
using namespace std;

int main() {

    int test;
    //READ();
    //WRITE();
    in test;
    while(test--) {
        int n,cnt=0;
        in n;
        getchar();
        map<string,int> mp;
        mp.clear();
        while(n--) {
            string s;
            in s;
            mp[s]=1;
        }
        int w=0;
        for(std::map<string,int>::iterator it=mp.begin(); it!=mp.end(); it++ ) {
            if(w) {
                string s,x;
                s=it->first;
                rep(0,s.size()-1) {
                    x+=s[i];
                    //out x<<" ";
                    if(mp[x]==1) {
                        //out x<<"<-";
                        cnt++;
                        //mp[s]++;
                        break;
                    }
                }
            }
            w++;
        }


        if(cnt==0) {
            out "YES\n";
        } else {
            out "NO\n";
        }
    }
    return 0;
}

