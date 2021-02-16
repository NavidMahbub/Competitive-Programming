#include<stdio.h>
int  main()

{
    int  t,i,n,p;
    while(scanf("%d",&t))
    {
        if(t==0)
        {
            return 0;
        }
        while(t--)
        {
            int cnt=0;
            for(i=1; i<=5; i++)
            {
                scanf("%d",&n);
                if(n<=127)
                {
                    cnt++;
                    p=i;
                }
            }

            if(cnt>1 || cnt==0)
            {
                printf("*\n");
            }
            else
            {
                if(p==1)
                {
                    printf("A\n");
                }
                else if(p==1)
                {
                    printf("A\n");
                }
                else if(p==2)
                {
                    printf("B\n");
                }
                else if(p==3)
                {
                    printf("C\n");
                }
                else if(p==4)
                {
                    printf("D\n");
                }
                else if(p==5)
                {
                    printf("E\n");
                }
            }
        }
    }
    return 0;
}
