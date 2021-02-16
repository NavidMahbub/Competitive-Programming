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
    int cs=0,group_mem;
    while(in group_mem) {
        string name[1500],x,tmp;


        int taka[1500],tk,person;
        memset(taka,0,sizeof(taka));
        rep(0,group_mem) {
            in name[i];
        }
//        for(int j=0; j<group_mem; j++) {
//            cout<<name[j]<<" "<<taka[j]<<endl;
//        }

        for(int i=0; i<group_mem; i++) {
            cin>>x;
            cin>>tk;
            cin>>person;
            for(int j=0; j<group_mem; j++) {
                if(name[j]==x) {
                    taka[j]=taka[j]-tk+(tk%person);
                    break;
                }
            }
            for(int w=0; w<person; w++) {
                cin>>tmp;
                for(int j=0; j<group_mem; j++) {
                    if(name[j]==tmp) {
                        taka[j]=taka[j]+(tk/person);
                        break;
                    }
                }
            }
        }
        for(int j=0; j<group_mem; j++) {
            cout<<name[j]<<" "<<taka[j]<<endl;
        }
    }
    return 0;
}

