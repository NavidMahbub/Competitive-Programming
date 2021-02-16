#include<iostream>
#include<cstring>

using namespace std;

int palindrome(string  s)
{
    int j,i,l;

    for(i=0, j=l-1 ; l/2 ; i++, j--)
    {
        if(s[i]!=s[j])
        {
            return 0;
        }
    }
    return 1;
}


int main()
{
    char s;
    while(cin>>s)
    {
        int flag=1;
        for(int i=0;i<s.lenth();i++)
        {
            if( s[i]!='A' || s[i]!='E' || s[i]!='H' || s[i]!='I' || s[i]!='J' || s[i]!='L' || s[i]!='M' || s[i]!='O' || s[i]!='S' || s[i]!='T' || s[i]!='U' || s[i]!='V' || s[i]!='W' || s[i]!='X' || s[i]!='Y' || s[i]!='Z' || s[i]!='1' || s[i]!='2' || s[i]!='3' || s[i]!='8')
            {
                flaq=0;
            }
        }
        int l=sizeof(s);
        int p=palindrome(s);
        //int m=mirrored(s);
        cout<<p<<" "<<flag<<endl;

    }



    return 0;
}
