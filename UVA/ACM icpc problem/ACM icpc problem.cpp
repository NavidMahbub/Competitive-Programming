
///                          ===>>	Problem Name : ***     ***
///                          ===>>	M@HBUB ALAM ,CSE,MBSTU.
///                          ===>>	Date : 27-March-2017

#include<bits/stdc++.h>
using namespace std;

int main() {

    int n,m;
    while(cin>>n>>m) {
        getchar();

        string s1[n],s2[n],w1[m],w2[m];

        for(int i=0; i<n; i++) {
            cin>>s1[i]>>s2[i];
        }
        for(int i=0; i<m; i++) {
            cin>>w1[i]>>w2[i];
        }
        cout<<endl<<endl;
        for(int i=0; i<m; i++) {
            if(w1[i].size()==w2[i].size()) {

                for(int k=0; k<w1[i].size(); k++) {
                    if(w1[i]==w2[i]) {
                        cout<<"Yes"<<endl;
                        break;
                    } else {
                        int f=0;
                        while(w1[i][k]!=w2[i][k]) {
                            cout<<w1[i]<<" -> ";
                            if(w1[i][k]==s1[f][0]) {
                                w1[i][k]=s2[f][0];
                            }
                            f++;
                            if(f>=n) {
                                break;
                            }
                        }

                    }
                }
                if(w1[i]!=w2[i]) {
                    cout<<"1 No"<<endl;
                }
            } else {
                cout<<"2 No"<<endl;
            }
        }
    }
    return 0;
}
