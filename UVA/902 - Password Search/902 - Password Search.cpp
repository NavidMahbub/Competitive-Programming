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
#define MAX 		    1000002
#define inf             2147483647
using namespace std;

int main() {
    int n;
    string s;
    while(in n>>s) {
        map<string,int >mp;
        for(int i=0; i<s.size()-n+1; i++) {
            string x;
            for(int j=i; j<n+i; j++) {
                x+=s[j];
            }
            mp[x]++;
            //out x<<" ";
        }
        //out n<<" "<<s;nl
        int mx=0;
        string a;
        for(std::map<string,int>::iterator it=mp.begin(); it!=mp.end(); it++ ) {
            if(mx<it->second){
                mx=it->second;
                a=it->first;
            }
        }
        cout<<a<<endl;
    }


    return 0;
}
