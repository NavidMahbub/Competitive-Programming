#include<bits/stdc++.h>
using namespace std;

int main() {
    long long int t,sum=0,tk;
    string s;
    scanf("%lld",&t);
    getchar();
    while(t--) {
        cin>>s;
        if(s=="donate"){
            cin>>tk;
            sum+=tk;
        }
        if(s=="report"){
            cout<<sum<<endl;
        }
    }
    return 0;
}
