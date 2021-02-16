
///                          ===>>	Problem Name : ***     ***
///                          ===>>	M@HBUB ALAM ,CSE,MBSTU.
///                          ===>>	Date : 27-March-2017

#include<bits/stdc++.h>
using namespace std;

int main() {

    int n,a[10000],i;

    while(scanf("%d",&n)==1) {

        if(n==0)return 0;
        int t=0;
        for(i=1; t!=13; i++) {

            memset(a,0,sizeof(a));
            int cnt=0,j,flag=1;
            a[1]=1;

            for(j=1; flag!=n; j++) {
                if(j>n)j=1;
                if(a[j]==0)cnt++;

                if(cnt==i) {
                    a[j]=1;
                    t=j;
                    flag++;
                    cnt=0;
                }
            }
        }
        printf("%d\n",i-1);
    }

    return 0;
}

