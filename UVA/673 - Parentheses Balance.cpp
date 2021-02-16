
/*		Problem Name : ***  ***
 *		Developed By : M@HBUB ALAM
 *		ID : CE-16042
 *		Date : 06-March-2017
 */

#include<bits/stdc++.h>
#define PI acos(-1)

using namespace std;

int main() {
    char a[1000];
    int n;
    cin>>n;
    getchar();
    while(n--) {
        gets(a);
        int checked=1;

        for(int i=0; a[i]!='\0'; i++) {
            if(a[i]!='0') {
                if(a[i]=='(') {
                    checked=0;
                    for(int j=i+1; a[j]!='\0'; j++) {
                        if(a[j]==')') {
                            a[j]='0';
                            a[i]='0';
                            checked=1;
                            break;
                        }
                    }
                    if(checked==0) {
                        break;
                    }
                }
                else if(a[i]=='[') {
                    checked=0;
                    for(int j=i+1; a[j]!='\0'; j++) {
                        if(a[j]==']') {
                            a[j]='0';
                            a[i]='0';
                            checked=1;
                            break;
                        }
                    }
                    if(checked==0) {
                        break;
                    }
                }
                else if(a[i]==')' || a[i]==']') {
                    checked=0;
                    break;
                }
            }
        }
        cout<<a<<endl;
        if(checked==0) {
            cout<<"No"<<endl;
        } else
            cout<<"Yes"<<endl;
    }
    return 0;
}
