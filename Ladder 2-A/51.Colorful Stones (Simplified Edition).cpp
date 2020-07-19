//Colorful Stones (Simplified Edition)(cpp)
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
  string s,t;
  cin>>s>>t;
  int c=0;
  int x=0;
  for(int i=0;i<t.size();i++){
      if(s[x]==t[i]){
          x++;;
          c++;
      }
  }
  cout<<c+1;
  
}    