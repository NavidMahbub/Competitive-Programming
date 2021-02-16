///                          ===>>	Problem Name : ***     ***
///                          ===>>	Developed By : M@HBUB ALAM
///                          ===>>	CSE,MBSTU.
///                          ===>>	Date : 03-April-2017


#include<bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main() {

    int n,m,cs=0;
    while(scanf("%d %d",&n,&m)) {
        getchar();
        if(n==0 || m==0) {
            return 0;
        }

        char a[n][m];

        for(int i=0; i<n; i++) {
            scanf("%s",a[i]);
            getchar();
        }

        printf("Field #%d:\n",++cs);

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if(a[i][j]=='*') {
                    printf("*");
                }

                else {
                    int cnt=0;
                    if(i==0 && j==0) {
                        if(a[i][j+1]=='*')cnt++;
                        if(a[i+1][j]=='*')cnt++;
                        if(a[i+1][j+1]=='*')cnt++;
                        printf("%d",cnt);
                    }

                    else if(i==0 && j==m-1) {
                        if(a[i][j-1]=='*')cnt++;
                        if(a[i+1][j-1]=='*')cnt++;
                        if(a[i+1][j]=='*')cnt++;
                        printf("%d",cnt);
                    }

                    else if(i==n-1 && j==0) {
                        if(a[i-1][j]=='*')cnt++;
                        if(a[i-1][j+1]=='*')cnt++;
                        if(a[i][j+1]=='*')cnt++;
                        printf("%d",cnt);
                    }

                    else if(i==n-1 && j==m-1) {
                        if(a[i][j-1]=='*')cnt++;
                        if(a[i-1][j-1]=='*')cnt++;
                        if(a[i-1][j]=='*')cnt++;
                        printf("%d",cnt);
                    }

                    else if(i==0 && j>0) {
                        if(a[i][j-1]=='*')cnt++;
                        if(a[i][j+1]=='*')cnt++;
                        if(a[i+1][j+1]=='*')cnt++;
                        if(a[i+1][j-1]=='*')cnt++;
                        if(a[i+1][j]=='*')cnt++;
                        printf("%d",cnt);
                    }

                    else if(i==n-1 && j>0) {
                        if(a[i][j-1]=='*')cnt++;
                        if(a[i][j+1]=='*')cnt++;
                        if(a[i-1][j+1]=='*')cnt++;
                        if(a[i-1][j-1]=='*')cnt++;
                        if(a[i-1][j]=='*')cnt++;
                        printf("%d",cnt);
                    }

                    else if(i>0 && j==0) {
                        if(a[i-1][j]=='*')cnt++;
                        if(a[i-1][j+1]=='*')cnt++;
                        if(a[i][j+1]=='*')cnt++;
                        if(a[i+1][j]=='*')cnt++;
                        if(a[i+1][j+1]=='*')cnt++;
                        printf("%d",cnt);
                    }

                    else if(i>0 && j==m-1) {
                        if(a[i][j-1]=='*')cnt++;
                        if(a[i-1][j-1]=='*')cnt++;
                        if(a[i-1][j]=='*')cnt++;
                        if(a[i+1][j]=='*')cnt++;
                        if(a[i+1][j-1]=='*')cnt++;
                        printf("%d",cnt);
                    }

                    else {
                        if(a[i][j-1]=='*')cnt++;
                        if(a[i][j+1]=='*')cnt++;
                        if(a[i+1][j]=='*')cnt++;
                        if(a[i-1][j]=='*')cnt++;
                        if(a[i-1][j-1]=='*')cnt++;
                        if(a[i-1][j+1]=='*')cnt++;
                        if(a[i+1][j+1]=='*')cnt++;
                        if(a[i+1][j-1]=='*')cnt++;
                        printf("%d",cnt);
                    }
                }
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
