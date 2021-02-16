
        /*		Problem Name : ***  ***
         *		Developed By : M@HBUB ALAM
         *		ID : CE-16042
         *		Date : 06-March-2017
         */

#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        n=n*567;
        n=n/9;
        n=n+7492;
        n=n*235;
        n=n/47;
        n=n-498;
        if(n<0){
            n=-n;
        }
        n=n/10;
        n=n%10;

        cout<<n<<endl;


    }
			/*Code here*/


return 0;
}