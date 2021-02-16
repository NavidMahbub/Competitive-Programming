
///                          ===>>	Problem Name : ***     ***
///                          ===>>	M@HBUB ALAM ,CSE,MBSTU.
///                          ===>>	Date : 27-March-2017

#include<bits/stdc++.h>
using namespace std;

int main() {
    char a[99999];
    while(gets(a)) {

        for(int i=0; a[i]!='\0'; i++) {
            if(a[i]!=' ') {
                if(a[i]>='1' && a[i]<='9') {
                    int n=a[i]-'0';
                    n=n+41;
                    printf("%c",n);
                } else {
                    int n=a[i]+'0';
                    n=n-55;
                    printf("%c",n);
                }
            }
        }
        printf("\n");
    }
    return 0;
}
