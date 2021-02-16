
/*		Problem Name : *** 10070 - Leap Year or Not Leap Year and ... ***
 *		Developed By : M@HBUB ALAM
 *		ID : CE-16042
 *		Date : 06-March-2017
 */


///Accepted

#include<bits/stdc++.h>

using namespace std;

int main() {


    char a[1000000];
    long long int t=0;
    while(gets(a)) {

        if(t>0) {
            cout<<endl;
        }
        t++;

        long long int len=strlen(a);
        long long int m4=0,m100=0,m400=0,m55=0,m15=0,i;

        for(i=0; i<len; i++) {
            m4=((m4*10)+(a[i]-'0'))%4;
            m100=((m100*10)+(a[i]-'0'))%100;
            m400=((m400*10)+(a[i]-'0'))%400;
            m55=((m55*10)+(a[i]-'0'))%55;
            m15=((m15*10)+(a[i]-'0'))%15;
        }

        if(m4==0) {
            if(m100==0) {
                if(m400==0) {
                    m4=0;
                } else {
                    m4=1;
                }
            } else {
                m4=0;
            }
        } else {
            m4=1;
        }
        if(m4==0) {
            cout<<"This is leap year."<<endl;
            if(m15==0) {
                cout<<"This is huluculu festival year."<<endl;
            }
            if(m55==0) {
                cout<<"This is bulukulu festival year."<<endl;
            }

        }

        else if(m15==0) {
            cout<<"This is huluculu festival year."<<endl;
        }


        else {
            cout<<"This is an ordinary year."<<endl;
        }
    }
    return 0;
}
