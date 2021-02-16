/**********************************************************\
*                  	  M@HBUB ALAM           		       *
*      MAWLANA BHASHANI SCIENCE & TECHNOLOGY UNIVERSITY    *
*          	  Computer Science & Engineering               *
*      						    	                       *
\**********************************************************/
///11920 - 0 s, 1 s and ? Marks
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
    int test,cs=0;
    string s,s2;
    in test;
    while(test--) {
        in s;
        s2=s;
        int cnt1=1,cnt2=1,m=1;

        rep(0,s.size()) {
            if(i==0 and s[i]=='?') {
                if(s[i+1]=='0') {
                    s[i]='1';
                } else if(s[i+1]=='1') {
                    s[i]='0';
                }else{
                    s[i]='1';
                }
            } else {
                if(s[i]=='?') {
                    if(s[i+1]!='?' and i+1<s.size()) {
                        if( (s[i-1]!=s[i+1]) ) {
                            int j=i+1;
                            while(j-1<s.size()) {
                                if((s[j]==s[j+1]) and (s[j]!='?' or s[j+1]!='?')) {
                                    cnt2++;
                                } else {
                                    break;
                                }
                                j++;
                            }
                            int res;
                            if(cnt1==cnt2) {
                                s[i]='1';
                                res=cnt1+1;
                            } else if(cnt1>cnt2) {
                                res=cnt1;
                                s[i]=s[i+1];
                            } else {
                                res=cnt2;
                                s[i]=s[i-1];
                            }

                            if(res>m) {
                                m=res;
                            }
                            cnt1=1;
                            cnt2=1;
                        } else {
                            if(s[i-1]=='0') {
                                s[i]='1';
                            } else {
                                s[i]='0';
                            }
                            int res;
                            if(cnt1>cnt2) {
                                res = cnt1;
                            } else {
                                res=cnt2;
                            }
                            if(res>m) {
                                m=res;
                            }
                            cnt1=1;
                            cnt2=1;
                        }
                    } else {
                        if(s[i-1]=='0') {
                            s[i]='1';
                        } else {
                            s[i]='0';
                        }
                    }



                } else {
                    if(s[i]==s[i-1] and i>0) {
                        cnt1++;
                    } else {
                        cnt1=1;
                    }
                    if(cnt1>m) {
                        m=cnt1;
                    }
                }
            }
        }
        cnt1=1,cnt2=1;
        int m1=1;
        rep(0,s2.size()) {
            if(i==0 and s2[i]=='?') {
                if(s2[i+1]=='0') {
                    s2[i]='1';
                } else if(s2[i+1]=='1') {
                    s2[i]='0';
                }else{
                    s2[i]='0';
                }
            } else {
                if(s2[i]=='?') {
                    if(s2[i+1]!='?' and i+1<s2.size()) {
                        if( (s2[i-1]!=s2[i+1]) ) {
                            int j=i+1;
                            while(j-1<s2.size()) {
                                if((s2[j]==s2[j+1]) and (s2[j]!='?' or s2[j+1]!='?')) {
                                    cnt2++;
                                } else {
                                    break;
                                }
                                j++;
                            }
                            int res;
                            if(cnt1==cnt2) {
                                s2[i]='1';
                                res=cnt1+1;
                            } else if(cnt1>cnt2) {
                                res=cnt1;
                                s2[i]=s2[i+1];
                            } else {
                                res=cnt2;
                                s2[i]=s2[i-1];
                            }

                            if(res>m1) {
                                m1=res;
                            }
                            cnt1=1;
                            cnt2=1;
                        } else {
                            if(s2[i-1]=='0') {
                                s2[i]='1';
                            } else {
                                s2[i]='0';
                            }
                            int res;
                            if(cnt1>cnt2) {
                                res = cnt1;
                            } else {
                                res=cnt2;
                            }
                            if(res>m1) {
                                m1=res;
                            }
                            cnt1=1;
                            cnt2=1;
                        }
                    } else {
                        if(s2[i-1]=='0') {
                            s2[i]='1';
                        } else {
                            s2[i]='0';
                        }
                    }



                } else {
                    if(s2[i]==s2[i-1] and i>0) {
                        cnt1++;
                    } else {
                        cnt1=1;
                    }
                    if(cnt1>m1) {
                        m1=cnt1;
                    }
                }
            }
        }
        if(m1<m){
            m=m1;
        }
        out s<<" "<<s2<< " Case "<<++cs<<": "<<m;
        nl
    }

    return 0;
}


