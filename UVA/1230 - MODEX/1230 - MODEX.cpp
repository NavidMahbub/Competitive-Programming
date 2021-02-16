
///                          ===>>	Problem Name : ***  BIG MOD Problem   ***
///                          ===>>	M@HBUB ALAM ,CSE,MBSTU.
///                          ===>>	Date : 28-April-2017N

#include<bits/stdc++.h>
using namespace std;

long long MOD(long long B, long long P, long long M){
    if(P==0) return 1;
    if(!(P%2)){
        long long R=MOD(B,P/2,M);
        return ((R%M)*(R%M))%M;
    }

    else
        return ((B%M)*MOD(B,P-1,M))%M;
}

int main(){
    long long x,y,z,test;
    cin>>test;
    while(test--){
        scanf("%lld%lld%lld",&x,&y,&z);

       printf("%lld\n",MOD(x,y,z));
    }
    cin>>x;
return 0;
}

