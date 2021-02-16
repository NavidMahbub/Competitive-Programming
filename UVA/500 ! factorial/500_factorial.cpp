///                          ===>>	Problem Name : *** 500!  ***
///                          ===>>	M@HBUB ALAM ,CSE,MBSTU.
///                          ===>>	Date : 15-March-2017

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,a[6][3000],R[3000];
    long long int zz=0;
    while(cin>>n) {
        printf("%d!\n",n);

        memset(R,0,sizeof(R));
        int  R_size=1,t_size;
        R[0]=1;

        for(int  i=1; i<=n; i++) {
            int m=i,j=-1,g;
            while(m!=0) {
                j++;
                memset(a[j],0,sizeof(a[j]));
                int t=m%10;
                m=m/10;
                int l=0;
                int  carry=0;

                for(int  k=0; k<R_size; k++) {
                    int x=(R[k]*t)+carry;
                    carry=x/10;
                    int v=x%10;
                    zz++;
                    a[j][l+j]=v;
                    l++;
                }
                if(carry>0) {
                    a[j][l+j]=carry;
                    t_size=l+j;
                } else
                    t_size=l+j-1;
            }
            int carry=0;
            for(int  p=0; p<=t_size; p++) {
                int  sum=carry;
                for(int  s=0; s<=j; s++) {
                    sum+=a[s][p];
                    zz++;
                }
                carry=sum/10;
                int  w=sum%10;
                R[p]=w;
                g=p;
            }
            if(carry>0) {
                R[g+1]=carry;
                R_size=t_size+2;
            } else
                R_size=t_size+1;
        }
        //cout<<R_size<<endl;
        for(int  p=R_size-1; p>=0; p--) {
            cout<<R[p];
            zz++;
        }
        cout<<endl;
        //cout<<zz<<endl;
    }
    return 0;
}

