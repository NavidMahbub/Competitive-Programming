
///                          ===>>	Problem Name : ***     ***
///                          ===>>	M@HBUB ALAM ,CSE,MBSTU.
///                          ===>>	Date : 27-March-2017

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,d,m,y,m_d,m_m,m_y,mx_d,mx_m,mx_y;
    string s,m_s,mx_s;

    while(scanf("%d",&n)==1) {

        cin>>m_s;
        scanf("%d%d%d",&m_d,&m_m,&m_y);
        mx_s=m_s;
        mx_d=m_d;
        mx_m=m_m;
        mx_y=m_y;
        for(int i=2; i<=n; i++) {

            cin>>s;
            scanf("%d%d%d",&d,&m,&y);

            if(y>m_y) {
                m_s=s;
                m_d=d;
                m_m=m;
                m_y=y;
            } else if(y==m_y) {
                if(m>m_m) {
                    m_s=s;
                    m_s=s;
                    m_d=d;
                    m_m=m;
                    m_y=y;
                } else if(m==m_m) {
                    if(d>m_d) {
                        m_s=s;
                        m_s=s;
                        m_d=d;
                        m_m=m;
                        m_y=y;
                    }
                }

            }


            if(y<mx_y) {
                mx_s=s;
                mx_d=d;
                mx_m=m;
                mx_y=y;
            } else if(y==mx_y) {
                if(m<mx_m) {
                    mx_s=s;
                    mx_d=d;
                    mx_m=m;
                    mx_y=y;
                } else if(m==mx_m) {
                    if(d<mx_d) {
                        mx_s=s;
                        mx_d=d;
                        mx_m=m;
                        mx_y=y;
                    }
                }
            }
        }

        cout<<m_s<<endl<<mx_s<<endl;
    }


    return 0;
}
