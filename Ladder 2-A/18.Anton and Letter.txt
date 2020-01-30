//Anton and letters(c++)
#include<bits/stdc++.h>
using namespace std;
int main(){
int i,c=-1,j,f=0;
string s;
getline(cin,s);
vector <char> v(s.length());
cin>>s;
for(i=1;i<s.length()-1;i++){
    if(s[i]!=' '&&s[i]!=','){
        f=0;
      for(j=0;j<=c;j++){
         if(s[i]==v[j]){
         f=1;
         break;
     }}
     if(f==0){
         c++;
     v[c]=s[i];
     }
    }
    }
cout<<c+1;
}