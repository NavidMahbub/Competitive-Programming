#include<stdio.h>
#include<string.h>


int palindrome(char s[],int l)
{
    int j,i;

    for(i=0, j=l-1 ; i<l/2 ; i++, j--)
    {
        if(s[i]!=s[j])
        {
            return 0;
        }
    }
    return 1;
}

int mirror(char s[],int l)
{
    int j,i;

    for(i=0, j=l-1 ; i<l/2 ; i++, j--)
    {
        if(s[i]=='E' || s[i]=='3')
        {
            if(s[j]=='E' || s[j]=='3')
            {
                int a=1;
            }
            else
                return 0;
        }

        else if(s[i]=='J' || s[i]=='L')
        {
            if(s[j]=='J' || s[j]=='L')
            {
                int a=1;
            }
            else
                return 0;
        }

        else if(s[i]=='S' || s[i]=='2')
        {
            if(s[j]=='S' || s[j]=='2')
            {
                int a=1;
            }
            else
                return 0;
        }

        else if(s[i]=='z' || s[i]=='5')
        {
            if(s[j]=='z' || s[j]=='5')
            {
                int a=1;
            }
            else
                return 0;
        }

        else if(s[i]=='J' || s[i]=='L')
        {
            if(s[j]=='J' || s[j]=='L')
            {
                int a=1;
            }
            else
                return 0;
        }

        else if(s[i]=='A' || s[i]=='A')
        {
            if(s[j]=='A' || s[j]=='A')
            {
                int a=1;
            }
            else
                return 0;
        }

        else if(s[i]=='H' || s[i]=='H')
        {
            if(s[j]=='H' || s[j]=='H')
            {
                int a=1;
            }
            else
                return 0;
        }

        else if(s[i]=='I' || s[i]=='I')
        {
            if(s[j]=='I' || s[j]=='I')
            {
                int a=1;
            }
            else
                return 0;
        }

        else if(s[i]=='M' || s[i]=='M')
        {
            if(s[j]=='M' || s[j]=='M')
            {
                int a=1;
            }
            else
                return 0;
        }

        else if(s[i]=='O' || s[i]=='O')
        {
            if(s[j]=='O' || s[j]=='O')
            {
                int a=1;
            }
            else
                return 0;
        }

        else if(s[i]=='T' || s[i]=='T')
        {
            if(s[j]=='T' || s[j]=='T')
            {
                int a=1;
            }
            else
                return 0;
        }

        else if(s[i]=='U' || s[i]=='U')
        {
            if(s[j]=='U' || s[j]=='U')
            {
                int a=1;
            }
            else
                return 0;
        }


        else if(s[i]=='V' || s[i]=='V')
        {
            if(s[j]=='V' || s[j]=='V')
            {
                int a=1;
            }
            else
                return 0;
        }

        else if(s[i]=='W' || s[i]=='W')
        {
            if(s[j]=='W' || s[j]=='W')
            {
                int a=1;
            }
            else
                return 0;
        }

        else if(s[i]=='X' || s[i]=='X')
        {
            if(s[j]=='X' || s[j]=='X')
            {
                int a=1;
            }
            else
                return 0;
        }

        else if(s[i]=='Y' || s[i]=='Y')
        {
            if(s[j]=='Y' || s[j]=='Y')
            {
                int a=1;
            }
            else
                return 0;
        }

        else if(s[i]=='1' || s[i]=='1')
       {
        if(s[j]=='1' || s[j]=='1')
            {
                int a=1;
            }
            else
                return 0;
        }

        else if(s[i]=='8' || s[i]=='8')
       {
        if(s[j]=='8' || s[j]=='8')
            {
                int a=1;
            }
            else
                return 0;
        }
        else
            return 0;
                   // }
    }
    return 1;
}

int main()
{
    char s[100];
    while(gets(s))
    {
        int l=strlen(s);
        int p=palindrome(s,l);
        int m=mirror(s,l);

        if(p==0 && m==0){printf("%s -- is not a palindrome.\n",s);}
        if(p==1 && m==0){printf("%s -- is a regular palindrome.\n",s);}
        if(p==0 && m==1){printf("%s -- is a mirrored string.\n",s);}
        if(p==1 && m==1){printf("%s -- is a mirrored palindrome.\n",s);}

    }
    return 0;
}