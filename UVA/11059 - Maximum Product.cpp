
        /*		Problem Name : *** maximum product ***
         *		Developed By : M@HBUB ALAM
         *		ID : CE-16042
         *		Date : 24-March-2017
         */

#include<bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(){

	long long int n,cs=0;
	while(cin>>n){
        cs++;




        int a[n];
        long long int mult=1,check=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]>0){
                mult=mult*a[i];
                check=1;
            }
        }



        if(check=0){
            mult=0;
        }
        cout<<"case #"<<cs<<": The maximum product is "<<mult<<"."<<endl;

            cout<<endl;

	}
return 0;
}