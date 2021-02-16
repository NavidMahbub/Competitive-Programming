
///                          ===>>	Problem Name : ***     ***
///                          ===>>	M@HBUB ALAM ,CSE,MBSTU.
///                          ===>>	Date : 27-March-2017

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t,l,w,h;

    while(cin>>t) {

        if(t==0) {
            return 0;
        }

        double mx_dwn=0.0;
        int mx_vlm=0.0;

        for(int i=1; i<=t; i++) {
            scanf("%d%d%d",&l,&w,&h);
            int vlm=l*w*h;
            float dwn=(float)(9.8-(9.8/(2*h)));
            if(dwn>mx_dwn) {
                mx_dwn=dwn;
                mx_vlm=vlm;
            }
            if(dwn==mx_dwn) {
                if(vlm>mx_vlm) {
                    mx_vlm=vlm;
                }
            }
        }

        cout<<mx_vlm<<endl;
    }

    return 0;
}
