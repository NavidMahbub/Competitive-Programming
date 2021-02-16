
///                          ===>>	Problem Name : ***  KMP Algo Implement   ***
///                          ===>>	M@HBUB ALAM ,CSE_MBSTU

#include<bits/stdc++.h>
using namespace std;
#define in cin>>
#define out cout<<
#define nl cout<<endl;
#define ll long long
#define rep(a,b) for(int i=a;i<b;i++)
#define repj(a,b) for(int j=a;j<b;j++)
#define repk(a,b) for(int k=a;k<b;k++)
#define brk break;
#define MAX 1000002

string tx,ptr;
int ft[1000];


void failure_table() {
    int p_siz = ptr.size();
    int i=0;
    int j=1;
    ft[0]=0;
    while(j<p_siz) {
        if(ptr[i]==ptr[j]) {
            ft[j]=i+1;
            i++;
            j++;
        } else {
            if(i>0) {
                i--;
            } else {
                ft[j]=i;
                j++;
            }
        }
    }
    rep(0,p_siz) {
        out ft[i]<<" ";
    }
}


void kmp() {
    int i=0,j=0;
    int p_siz = ptr.size();
    int t_siz = tx.size();
    failure_table();
    while(j<t_siz) {
        if(tx[j]==ptr[i]) {
            while(tx[j]==ptr[i] && j<t_siz && i<p_siz) {
                i++;
                j++;
            }
            if(i==p_siz) {
                out "PATTERN Found in *"<<j-i+1<<" th position in Text";
                nl
                i=0;
            } else {
                j++;
                if(ft[i-1]==0) {
                    i=0;
                    j++;
                } else {
                    j=ft[i-1];
                }
            }
        } else {
            j++;
        }
    }
}

int main() {

    in tx>>ptr;
    nl
    kmp();

    return 0;
}
