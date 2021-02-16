
        /*		Problem Name : ***  ***
         *		Developed By : M@HBUB ALAM
         *		ID : CE-16042
         *		Date : 24-March-2017
         */

#include<bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(){

	int t,n,cs=1;
	cin>>t;
	while(t--){
        cin>>n;
        int a[n],high=0,low=0;

        cin>>a[0];
        for(int i=1;i<n;i++){
            cin>>a[i];
            if(a[i]>a[i-1]){
                high++;
            }
            if(a[i]<a[i-1]){
                low++;
            }
        }

        cout<<"Case "<<cs++<<": "<<high<<" "<<low<<endl;
	}




return 0;
}