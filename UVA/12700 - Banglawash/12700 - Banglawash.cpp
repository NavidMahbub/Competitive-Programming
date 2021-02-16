///                          ===>>	Problem Name : ***     ***
///                          ===>>	M@HBUB ALAM ,CSE,MBSTU.
///                          ===>>	Date : 27-April-2017

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,n,cs=0;
    scanf("%d",&t);
    while(t--) {
        scanf("%d",&n);
        getchar();
        char a[n];
        scanf("%s",a);

        int b=0,w=0,tt=0,aa=0;
        for(int i=0;i<n;i++){
            if(a[i]=='B'){
                b++;
            }
            else if(a[i]=='W'){
                w++;
            }
             else if(a[i]=='T'){
                tt++;
            }
            else if(a[i]=='A'){
                aa++;
            }
        }
        if(aa==n){
            cout<<"Case "<<++cs<<": "<<"ABANDONED"<<endl;
        }
        else if(b==w){
            cout<<"Case "<<++cs<<": "<<"DRAW "<<b<<" "<<tt<<endl;
        }
        else if(b>0 && w==0 && tt==0){
            cout<<"Case "<<++cs<<": "<<"BANGLAWASH"<<endl;
        }
        else if(w>0 && b==0 && tt==0){
            cout<<"Case "<<++cs<<": "<<"WHITEWASH"<<endl;
        }
        else if(b>w){
            cout<<"Case "<<++cs<<": "<<"BANGLADESH "<<b<<" - "<<w<<endl;
        }
        else if(b<w){
            cout<<"Case "<<++cs<<": "<<"WWW "<<w<<" - "<<b<<endl;
        }
    }

    return 0;
}
