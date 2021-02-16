///                          ===>>	Problem Name : ***     ***
///                          ===>>	M@HBUB ALAM ,CSE,MBSTU.
///                          ===>>	Date : 27-April-2017

#include<bits/stdc++.h>
using namespace std;
int v=0;
void hanoi(int n,char a,char b,char c) {
    if(n==1) return;
    if(n>1) {
        hanoi(n-1,a,c,b);
        hanoi(1,a,b,c);
        cout<<a<<" ==>> "<<c<<endl;
        hanoi(n-1,b,a,c);
        //cout<<b<<" ==>> "<<c<<endl;

    }
}

int main() {
    int n,a=1,b=2,c=3;
    cin>>n;
    hanoi(n,'A','B','C');

    return 0;
}
