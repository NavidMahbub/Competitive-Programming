
///                          ===>>	Problem Name : ***     ***
///                          ===>>	M@HBUB ALAM ,CSE,MBSTU.
///                          ===>>	Date : 27-March-2017

#include<bits/stdc++.h>
using namespace std;

struct players {
    string name;
    int attk,dfns;
};

int main() {

    int t,cs=1;
    cin>>t;
    getchar();
    while(t--) {
        struct players player[10];

        for(int i=0; i<10; i++) {
            cin>>player[i].name>>player[i].attk>>player[i].dfns;
        }
        for(int i=0; i<10; i++) {
            for(int j=i+1; j<10; j++) {
                if(player[i].attk>player[j].attk) {
                    swap(player[i].attk,player[j].attk);
                    swap(player[i].name,player[j].name);
                    swap(player[i].dfns,player[j].dfns);
                } else if(player[i].attk==player[j].attk) {
                    if(player[i].dfns<player[j].dfns) {
                        swap(player[i].attk,player[j].attk);
                        swap(player[i].name,player[j].name);
                        swap(player[i].dfns,player[j].dfns);
                    } else if(player[i].dfns==player[j].dfns) {
                        if(player[i].name<player[j].name) {
                            swap(player[i].attk,player[j].attk);
                            swap(player[i].name,player[j].name);
                            swap(player[i].dfns,player[j].dfns);
                        }
                    }
                }
            }
        }


        for(int i=5; i<10; i++) {
            for(int j=i+1; j<10; j++) {
                if(player[i].name>player[j].name) {
                    swap(player[i].name,player[j].name);
                }
            }
        }
        cout<<"Case "<<cs++<<":"<<endl;
        cout<<"("<<player[5].name;
        for(int i=6; i<10; i++) {
            cout<<", "<<player[i].name;
        }
        cout<<")"<<endl;
        for(int i=0; i<5; i++) {
            for(int j=i+1; j<5; j++) {
                if(player[i].name>player[j].name) {
                    swap(player[i].name,player[j].name);
                }
            }
        }
        cout<<"("<<player[0].name;
        for(int i=1; i<5; i++) {
            cout<<", "<<player[i].name;
        }
        cout<<")"<<endl;
    }
    return 0;
}
