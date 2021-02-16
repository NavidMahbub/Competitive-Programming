
/*		Problem Name : ***  ***
 *		Developed By : M@HBUB ALAM
 *		ID : CE-16042
 *		Date : 06-March-2017
 */

#include<bits/stdc++.h>

using namespace std;

int main() {
    double a,b,c,R,s,t_area,C_area,c_area,r;
    while(cin>>a>>b>>c) {

        s=(a+b+c)/2;
        t_area=sqrt(s*(s-a)*(s-b)*(s-c));

        R=(a*b*c )/ sqrt((a+b+c)*(b+c-a)*(c+a-b)*(a+b-c));
        C_area=3.1416*R*R;

        C_area=C_area-t_area;


        r=sqrt((s-a)*(s-b)*(s-c)/s);
        c_area=3.1416*r*r;
        t_area=t_area-c_area;


        cout<<C_area<<" ";
        cout<<t_area<<" ";
        cout<<c_area<<endl;

    }

    return 0;
}
