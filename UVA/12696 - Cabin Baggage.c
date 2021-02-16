#include<stdio.h>
int main()
{
    int t,cnt=0;
    scanf("%d",&t);
    while(t--)
    {
        float  length, width, depth , weight;
        scanf("%f",&length);
        scanf("%f",&width);
        scanf("%f",&depth);
        scanf("%f",&weight);
        if(length>56.00){printf("0\n");}
        else if(width>45.00){printf("0\n");}
        else if(depth>25.00){printf("0\n");}
        else if(weight>7.00){printf("0\n");}
        //else if(length+width+depth>125.00){printf("0\n");}
        else
        {
            cnt++;
            printf("1\n");
        }
    }
    printf("%d\n",cnt);
    return 0;
}