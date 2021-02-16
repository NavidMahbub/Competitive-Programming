

///                          ===>>	Problem Name : ***     ***
///                          ===>>	M@HBUB ALAM ,CSE,MBSTU

#include<bits/stdc++.h>
using namespace std;
#define in cin>>
#define out cout<<
#define nl cout<<endl;
#define ll long long
#define rep(a,b) for(int i=a;i<b;i++)
#define repj(a,b) for(int j=a;j<b;j++)
#define repk(a,b) for(int k=a;k<b;k++)
#define MAX 1000002

int main() {
    char c;
    int yes=1;
    int chk=1,i=0;
    string s1[MAX],s2[MAX],s;

    while(1) {
        int x = 0 ;
        while(getline(cin , s)) {
            int cont =0 ;
            rep(0,s.size()) {
                if(s[i]==' ') {
                    cont =1 ;
                    break;
                }
            }
            if(!cont) {break;}
            s1[x].copy(s.begin(),s.end());
        }
    }



    return 0;
}
