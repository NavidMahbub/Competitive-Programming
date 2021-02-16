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
#define ms(a)         memset(a, 0, sizeof (a))
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
#define pii 		    pair<int,int>
#define inf             2147483647
using namespace std;


void Binary(int n){
    stack <int> st;
    while(n){
        (n%2)==1?st.push(1):st.push(0);
        n=n/2;
    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
}

int main() {

    string s;
    while(getline(cin,s)){
        for(int i=0;i<s.size();i++){
            int n=(int)s[i];
            //if not Number 1, 2, 3 etc
            Binary(n);
            cout<<" ";
        }
        nl
    }
    return 0;
}
