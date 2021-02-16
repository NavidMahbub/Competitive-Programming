#include <iostream>
#include <bits/stdc++.h>
#include <array>
#include<algorithm>

using namespace std;

int main ()
{
  vector <int> a;
  vector <int> b;
  a.push_back(1);
  a.push_back(2);
  a.push_back(3);
  a.push_back(4);
  a.push_back(5);
  b.assign(a.begin(),a.end());
  for(int i=0;i<b.size();I++){
    cout<<b[i];
  }


}
