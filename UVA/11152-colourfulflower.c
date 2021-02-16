
        /*		Problem Name : ***  ***
         *		Developed By : M@HBUB ALAM
         *		ID : CE-16042
         *		Date : 06-March-2017
         */

#include<stdio.h>
#include<math.h>
#define PI acos(-1)


int main(){
        double a,b,c,R,s,t_area,C_area,c_area,r;


        while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF){

            s=(a+b+c)/2;
            t_area=sqrt((s*(s-a)*(s-b)*(s-c)));

            R=(a*b*c )/ sqrt((a+b+c)*(b+c-a)*(c+a-b)*(a+b-c));
            C_area=PI*pow(R,2);

            C_area=C_area-t_area;
            r=sqrt(((s-a)*(s-b)*(s-c))/s);
            c_area=PI*pow(r,2);
            t_area=t_area-c_area;

            printf("%.4lf %.4lf %.4lf\n",C_area,t_area,c_area);

        }

return 0;
}