#include<bits/stdc++.h>
using namespace std;

int f[7000],s[7000],fn[7000];
vector <int> v[5025];

void fibo() {
    f[0] = 0;
    s[0] = 1;
    int s_size = 1;
    int fn_size = 1;
    v[0].push_back(0);
    for(int i=1; i<=5020; i++) {
        int car=0,k;
        for(k=0; k<s_size; k++) {
            int t = f[k] + s[k] + car;
            int p = t % 10;
            car = t / 10;
            fn[k] = p;
        }
        fn_size = k;
        if( car > 0 ) {
            fn[k] = car;
            fn_size++;
        }
        memcpy(f,  s,  s_size*sizeof(int));
        memcpy(s, fn, fn_size*sizeof(int));
        s_size = fn_size;

        copy( &fn[0], &fn[fn_size], back_inserter(v[i]) );
    }
    return;
}

int main() {
    int n;
    fibo();
    while( scanf("%d",&n) == 1 ) {

        int m = v[n-1].size() - 1;
        printf("The Fibonacci number for %d is ",n);

        if( n==0 ) {
            printf("0");
        } else if(n==1) {
            printf("1");
        } else {
            for(int i=m; i>=0; i--) {
                printf("%d",v[n-1][i]);
            }
        }

        printf("\n");
    }
    return 0;
}
