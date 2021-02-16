#include<iostream>

using namespace std;

int main()
{
    int n;
    while((cin>>n))
    {
        int flag=1,a,b;
        for(int i=n;i>0;i--){
            for(int j=n-1;j>0;j--)
            {
                if((i*j)==n)
                {
                    a=i;
                    b=j;
                   // flag=0;
                    //break;
                }
            }
            if (flag==0){break;}
        }
        cout<<b<<" "<<a<<endl;
    }
    return 0;
}