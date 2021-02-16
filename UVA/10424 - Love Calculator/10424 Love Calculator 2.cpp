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

    string s,f;
    while(getline(cin,f)) {

        getline(cin,s);
        int sm1=0,sm2=0;

        rep( 0, f.size() ) {
            if(isalpha(f[i])) {
                sm1 += ( ((f[i] - 96)>0 ) ? (f[i] - 96) : (f[i] - 64) ) ;
            }
        }
        rep( 0, s.size() ) {
            if(isalpha(s[i])) {
                sm2 += ( ((s[i] - 96)>0 ) ? (s[i] - 96) : (s[i] - 64) ) ;
            }
        }
        while(sm1>9) {
            int n = sm1, N=0;
            while(n) {
                N += n % 10 ;
                n/=10;
            }
            sm1 = N ;
        }
        while(sm2>9) {
            int n = sm2, N=0;
            while(n) {
                N += n % 10 ;
                n/=10;
            }
            sm2 = N ;
        }
        double d = (sm2*100.00)/sm1 ;
        if(d>100) {
            d = ((1.00/d)*10000);
        }
        if(sm1 or sm2) {
            printf("%.2lf %c\n",d,'%');
        }else{
            nl
        }
    }
    return 0;
}
