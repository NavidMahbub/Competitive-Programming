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
    int test;

    in test;
    getchar();
    while(test--) {
        string s1,s2,s;
        cin>>s1>>s2;
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        int sz;

        s1.size()>s2.size()?sz=s2.size():sz=s1.size();

        int carry=0;
        if(s1.size()>s2.size()){
            string w;
            for(int i=0;i<(s1.size()-s2.size());i++){
                w+='0';
            }
            s2=w+s2;
        }else if(s1.size()<s2.size()){
            string w;
            for(int i=0;i<s2.size()-s1.size();i++){
                w+='0';
            }
            s1=w+s1;
        }
        reverse(s1.begin(),s1.end());
        reverse(s2.begin(),s2.end());
        //out s1<<endl<<s2<<endl;
        for(int i=0;i<s1.size();i++) {
            int n1=s1[i]-'0';
            int n2=s2[i]-'0';
            int n=n1+n2+carry;
            if(n>9) {
                carry=1;
            } else {
                carry=0;
            }
            n=n%10;
            if(n==0){
                s+='0';
            }else if(n==1){
                s+='1';
            }else if(n==2){
                s+='2';
            }else if(n==3){
                s+='3';
            }else if(n==4){
                s+='4';
            }else if(n==5){
                s+='5';
            }else if(n==6){
                s+='6';
            }else if(n==7){
                s+='7';
            }else if(n==8){
                s+='8';
            }else if(n==9){
                s+='9';
            }
        }
        int chk=0;
        rep(0,s.size()){
            int n1=s[i]-'0';
            if(n1){
                chk=1;
            }
            if(chk){
                out s[i];
            }
        }
        if(carry>0){
            out carry;
        }
        nl
    }
    return 0;
}
