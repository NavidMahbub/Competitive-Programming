
///                          ===>>	Problem Name : ***     ***
///                          ===>>	M@HBUB ALAM ,CSE,MBSTU.
///                          ===>>	Date : 27-March-2017

#include<bits/stdc++.h>
using namespace std;
void table(string ptrn) {
    int t_lenth=ptrn.size();
    int i=0,j=1;
    int lps[100];
    lps[0]=0;
    while(j<t_lenth) {
        if(ptrn[i]==ptrn[j]) {
            lps[j]=i+1;
            i++;
            j++;
        } else {
            if(i!=0)
                i--;
            else {
                lps[j]=0;
                j++;
            }
        }
    }
    for(int i=0;i<t_lenth;i++){
        cout<<lps[i]<<" ";
    }
    cout<<endl;
}
int main() {
    while(1){
        string ptrn;
        cin>>ptrn;
        table(ptrn);
    }

    return 0;
}
