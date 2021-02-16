

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){

    char a[100000];
    int n;
    cin>>n;
    while(n--){
        cin>>a;
        int v=1,sum=0;
        for(int i=0;a[i]!='\0';i++){

            if(a[i]=='O'){
                sum+=v;
                v++;
            }
            else
                v=1;
        }

        cout<<sum<<endl;
    }
return 0;
}