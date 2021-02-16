///                          ===>>	Problem Name : ***     ***
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
#define brk break;
#define MAX 1000002
int FT[MAX];
string txt,ptrn;

void Failure_table() {
    int  p_siz = ptrn.size();
    int i=0,j=1;
    FT[0]=0;
    while(j<p_siz) {
        if(ptrn[i]==ptrn[j]) {
            FT[j++]=++i;
        } else {
            if(i) {
                i--;
            } else {
                FT[j]=i;
                j++;
            }
        }
    }
}
void KMP() {
    int  t_siz = txt.size();
    int  p_siz = ptrn.size();
    Failure_table();
    int i=0,j=0,chk=0;
    while(j<t_siz) {
        if(txt[j]==ptrn[i]) {
            while(txt[j]==ptrn[i] &&j<t_siz) {
                i++;
                j++;
            }
            if(i==p_siz) {
                out "y\n";
                chk=1;
                break;
            } else {
                if(FT[i-1]==0) {
                    i=0;
                } else {
                    i=FT[i-1];
                }
            }
        } else {
            j++;
        }
    }
    if(!chk) {
        out "n\n";
    }
}

int main() {
    int test_case,test;
    in test_case;
    getchar();

    while(test_case--) {
        in txt;
        in test;
        getchar();
        while(test--) {
            in ptrn;
            KMP();
        }
    }
    return 0;
}
