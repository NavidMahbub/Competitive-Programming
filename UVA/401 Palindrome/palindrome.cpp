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

int main() {
    string s,s1,s2;

    map<char,int>mp;
    mp['A']=1,mp['E']=2,mp['H']=3,mp['I']=4,mp['J']=6,mp['L']=7,mp['M']=8,mp['O']=9,mp['S']=10,mp['T']=11,mp['U']=12,mp['V']=13;
    mp['W']=14,mp['X']=15,mp['Y']=16,mp['Z']=17,mp['1']=18,mp['2']=19,mp['3']=20,mp['5']=21,mp['8']=22;

    map<int,char>mp2;
    mp2[1]='A',mp2[2]='3',mp2[3]='H',mp2[4]='I',mp2[6]='L',mp2[7]='J',mp2[8]='M',mp2[9]='O',mp2[10]='2',mp2[11]='T',mp2[12]='U',mp2[13]='V',mp2[14]='W',mp2[15]='X';
    mp2[16]='Y',mp2[17]='5',mp2[18]='1',mp2[19]='S',mp2[20]='E',mp2[21]='Z',mp2[22]='8';

    while(cin>>s) {
        int palinrome=0,mirror=1;
        s1=s;
        reverse(s1.begin(),s1.end());
        if(s1==s) {
            palinrome=1;
        }
        for(int i=0; i<s.size()/2; i++) {
            if(mp[s[i]]) {
                if(mp2[mp[s[i]]]!=s1[i]) {
                    mirror=0;
                }
            }else{
                mirror=0;
            }
        }
        //cout<<s.size()/2+1;
        if(mp[ s[(s.size()/2)] ]==0){
            mirror=0;
        }

        if(palinrome and mirror){
            cout<<s<<" -- is a mirrored palindrome."<<endl;
        }else if(palinrome and mirror==0){
            cout<<s<<" -- is a regular palindrome."<<endl;
        }else if(palinrome==0 and mirror){
            cout<<s<<" -- is a mirrored string."<<endl;
        }else{
            cout<<s<<" --  is not a palindrome."<<endl;
        }
    }
    return 0;
}
