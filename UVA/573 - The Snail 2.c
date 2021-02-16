#include<stdio.h>
int main()
{
    double I_Ht, D_Cmbd,Heit_Aftr_Clmb, Heit_Aftr_Slid,H, U, D, F;
    while(scanf("%lf%lf%lf%lf",&H, &U, &D, &F))
    {
        if(H==0)
        {
            return 0;
        }
        F=(F*U)/100;
        int day=1,flag=1;
        I_Ht=0;
        D_Cmbd=U;
        Heit_Aftr_Clmb=U;
        Heit_Aftr_Slid=U-D;
        if(Heit_Aftr_Slid<0)
        {
            printf("failure on day %d\n",day);
        }
        else
        {
            while(Heit_Aftr_Clmb<=H)
            {
                I_Ht= Heit_Aftr_Slid;
                D_Cmbd=D_Cmbd-F;
                if(D_Cmbd<0)
                {
                    D_Cmbd=0;
                }
                Heit_Aftr_Clmb=I_Ht+D_Cmbd;
                Heit_Aftr_Slid=Heit_Aftr_Clmb-D;
                day++;
                if(Heit_Aftr_Slid<0)
                {
                    flag=0;
                    break;
                }

            }
            if(flag==1)
                printf("success on day %d\n",day);
            else
                printf("failure on day %d\n",day);
        }
    }
    return 0;
}
