
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

    int N;
    while(in N) {
        int cnt=0;
        if(N==0) {
            cnt=1;
        } else {
            int z=sqrt(N)+1;
            for(int a=0; a<=z; a++) {
                for(int b=0; b<=z; b++) {
                    double c =((5.00*N)-(36.00*a*a)-(18.00*b*b))/6.00;
                    //printf("%lf ",c);
                    if(c>=0){
                        c=sqrt(c);
                        int r=c;
                        if(c==r){
                            cnt++;
                            //out a<<" "<<b<<" "<<c;nl
                        }
                    }
                }
            }
        }
        out cnt;nl
    }
    return 0;
}
