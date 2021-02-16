#include<bits/stdc++.h>
using namespace std;
int t[100];
int main() {


    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    int k,cnt=0,rslt=0,mini=1000000000;
    cin>>k;
    int l=0,r=0;

    while(r<n) {
        if(a[r]<=k) {
            if(t[a[r]]>0) {
                t[a[r]]++;
            } else {
                cnt++;
                t[a[r]]++;
            }
        } else {
            r++;
        }
        if(cnt==k) {
            rslt=r-l+1;
            if(rslt<mini) {
                mini=rslt;
            }

            t[a[l]]--;
            if(t[a[l]]<=0){
                cnt--;
            }else{
                l++;
            }

        }
        cout<<mini<<" ";
    }

    return 0;
}
