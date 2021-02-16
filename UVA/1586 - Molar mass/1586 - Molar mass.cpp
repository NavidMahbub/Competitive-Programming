#include<bits/stdc++.h>
using namespace std;
int main() {

    int test;
    cin>>test;
    getchar();
    while(test--) {
        string s;
        cin>>s;
        float sum = 0;
        for(int i=0; i<s.size(); i++) {
            if(isalpha(s[i])) {
                int num=0,m=1,pos=i;
                i++;
                while(s[i]>='0' and s[i]<='9') {
                    int t = s[i]-'0';
                    num = num*m + t;
                    m*=10;
                    i++;
                }
                i = pos;
                if(num == 0) {
                    num = 1;
                }

                if(s[pos]=='C') {
                    sum +=  num * (12.010) ;
                } else if(s[pos]=='H') {
                    sum +=  num * (1.008) ;
                } else if(s[pos]=='O') {
                    sum +=  num * (16.000) ;
                } else if(s[pos]=='N') {
                    sum +=  num * (14.010) ;
                }
            }

        }
        printf("%.3lf\n",sum);
    }
    return 0;
}
