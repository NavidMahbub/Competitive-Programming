
///                          ===>>	Problem Name : ***     ***
///                          ===>>	M@HBUB ALAM ,CSE,MBSTU.
///                          ===>>	Date : 27-March-2017

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,mx,cs=1;
    string s[10];
    int a[10];
    cin>>t;
    getchar();
    while(t--) {

        cin>>s[0];
        cin>>a[0];
        mx=a[0];
        for(int i=1; i<10; i++) {
            cin>>s[i];
            cin>>a[i];
            if(a[i]>mx){
                mx=a[i];
            }
        }

        cout<<"Case #"<<cs++<<":"<<endl;

        for(int i=0;i<10;i++){
            if(a[i]==mx){
                cout<<s[i]<<endl;
            }
        }

    }

    return 0;
}
