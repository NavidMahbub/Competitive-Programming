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
    long long B,P,M,cs=0,ii=2258403328;
    cout<<ii%1312<<endl;
    while(scanf("%lld%lld%lld",&B,&P,&M)==3){

       printf("%lld\n",MOD(B,P,M));
    }
return 0;
}

