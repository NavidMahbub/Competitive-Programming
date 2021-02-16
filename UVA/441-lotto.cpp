///                          ===>>	Problem Name : ***     ***
///                          ===>>	Developed By : M@HBUB ALAM
///                          ===>>	CSE,MBSTU.
///                          ===>>	Date : 03-April-2017



#include<bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main(){
	int n,cs=0;
	while(scanf("%d",&n)){
        if(n==0){
            return 0;
        }



        int a[n];
        if(cs==1)
        printf("\n");
        cs=1;




        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }


        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
                    for(int l=k+1;l<n;l++){
                        for(int m=l+1;m<n;m++){
                            for(int p=m+1;p<n;p++){
                                    printf("%d %d %d %d %d %d\n",a[i],a[j],a[k],a[l],a[m],a[p]);
                                }
                            }
                        }
                    }
                }
            }
	}
return 0;
}