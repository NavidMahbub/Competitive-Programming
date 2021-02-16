
///                          ===>>	Problem Name : *** 12555 Baby me   ***
///                          ===>>	M@HBUB ALAM ,CSE,MBSTU.
///                          ===>>	Date : 27-March-2017

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,a,cs=0;
    cin>>t;
    while(t--) {

        double Kg=0;
        char s[10];
        cin>>a;
        getchar();
        gets(s);

        int i = 2,num = 0,chk = 0;
        Kg = a*.5;

        while( s[i]>='0' && s[i]<='9' && s[i] != '\0' && i<strlen( s ) ) {
            int t = s[i] - '0';
            num = num*10 + t;
            i++;
            chk = 1;
        }
        if( chk == 1 ) Kg = Kg + num*.05 ;
        cout<<"Case "<<++cs<<": "<<Kg<<endl;
    }
    return 0;
}
