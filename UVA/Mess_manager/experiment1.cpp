#include<bits/stdc++.h>
using namespace std;

int main(){
    float meal[100],sum=0,cost,joma[100],tottal_joma=0;
    char nam[30][30];
    int n;
    //freopen("meal_text_in.txt","r",stdin);
    //freopen("meal_text_out.txt","w",stdout);
    cout<<"Enter Member No : ";
    cin>>n;
    cout<<"\nEnter Tottal Cost : ";
    cin>>cost;
    cout<<"\nEnter Name , Meal no , Joma : "<<endl;
    for(int i=0;i<n;i++){
        cin>>nam[i];
        cin>>meal[i];
        cin>>joma[i];
        tottal_joma+=joma[i];
        sum+=meal[i];
    }
    cout<<endl<<endl;
    cout<<"......................................."<<endl<<endl;
    cout<<"Tottal cost No : "<<cost<<endl;
    cout<<"Tottal Joma Taka : "<<tottal_joma<<endl;
    cout<<"Tottal Meal No : "<<sum<<endl;
    cout<<"Meal Rate : "<<cost/sum<<endl<<endl;
    float net_taka=0;
    for(int i=0;i<n;i++){
        float x=((cost/sum)*meal[i])-joma[i];
        net_taka+=x;
        if(x<0){
            //printf("Joma %d  cost %f ",joma[i],joma[i]*(cost/sum));
            printf("%2d. %7s will get %5.2f taka\n",i+1,nam[i],-x);
        }
        else{
             //printf("Joma %d  cost %f ",joma[i],joma[i]*(cost/sum));
            printf("%2d. %7s will pay %5.2f taka\n",i+1,nam[i],x);
        }
    }
    cout<<endl;
    cout<<"Manager will tottaly get "<<net_taka<<endl;
    cout<<endl<<"!!!!!!!!!!!!!!! Thank You !!!!!!!!!!!!!!!!"<<endl;
    getchar();
    getchar();

return 0;
}
