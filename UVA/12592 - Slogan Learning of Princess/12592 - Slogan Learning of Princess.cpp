

///                          ===>>	Problem Name : ***     ***
///                          ===>>	M@HBUB ALAM ,CSE,MBSTU.
///                          ===>>	Date : 27-March-2017

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t,n;
    while(cin>>t){
        getchar();
        string s1[t],s2[t],s;
        char nn;
        for(int i=0;i<t;i++){

            getline(cin,s1[i]);
            getline(cin,s2[i]);

        }

        cin>>n;
        getchar();
        for(int i=0;i<n;i++){
           getline(cin,s);
            for(int k=0;k<t;k++){
                if(s1[k]==s){
                    cout<<s2[k]<<endl;
                    break;
                }
            }
        }
    }

return 0;
}
