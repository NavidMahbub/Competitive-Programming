///                          ===>>	Problem Name : ***     ***
///                          ===>>	M@HBUB ALAM ,CSE,MBSTU.
///                          ===>>	Date : 27-April-2017


/// AC
#include<bits/stdc++.h>
using namespace std;

int main() {

    char a[10000];
    while(gets(a)) {
        int cnt=0;
        for(int i=0; a[i]!='\0'; i++) {
            int sgn=0;
            if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z')){
                while((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z')){
                    i++;
                }
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}
