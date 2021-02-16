

///                          ===>>	Problem Name : *** Big number of team will solve this  ***
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
    int test,True,cs=0;
    in test;
    getchar();
    while(test--) {
        string s1,s2;
        getline(cin, s1);
        getline(cin, s2);
        int j=0, i=0;

        while(1) {
            True=0;
            if(s1[i]!=' ' && s2[j]!=' ') {
                if(s1[i]==s2[j]) {
                    i++;
                    j++;
                    True=1;
                    if(i>s1.size() || j>s2.size()) {
                        break;
                    }
                } else {
                    True=0;
                    break;
                }
            } else if(s1[i]==' ') {
                i++;
            } else if(s2[j]==' ') {
                j++;
            }
        }

        if(True and s1==s2) {
            printf("Case :%d Yes\n",++cs);
        } else if(True and s1!=s2) {
            printf("Case :%d Output Format Error\n",++cs);
        } else {
            printf("Case :%d Wrong Answer\n",++cs);
        }
    }

    return 0;
}
