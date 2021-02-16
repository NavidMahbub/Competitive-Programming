

///                          ===>>	Problem Name : ***     ***
///                          ===>>	M@HBUB ALAM ,CSE,MBSTU.
///                          ===>>	Date : 27-March-2017

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    scanf("%d",&t);
    getchar();
    while(t--) {
        char a[25],s[25];
        gets(a);
        int s1=0,s2=0,d;
        int chk=1,k=0;
        for(int i=0; i<19; i++) {
            if(a[i]>='0' && a[i]<='9') {
                s[k++]=a[i];
            }
        }
        s[k]='\0';


        for(int i=0; s[i]!='\0'; i++) {
            if(i%2==0) {
                d=s[i]-'0';
                d=d*2;
                while(d!=0) {
                    s2+=(d%10);
                    d=d/10;
                }
            }
            else{
                d=s[i]-'0';
                s1+=d;
            }
        }

        s1=s1+s2;
        if(!(s1%10)){
            printf("Valid\n");
        }
        else{
            printf("Invalid\n");
        }
    }
    return 0;
}
