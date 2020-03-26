//Slueth(c++)
#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   getline(cin,s);
   int i;char c;
   for(i=s.length();i>=0;i--){
       c=tolower(s[i]);
       if(c>='a'&&c<='z'){
           if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y')
           cout<<"YES";
           else
           cout<<"NO";
           break;
       }
   }
  
    }
