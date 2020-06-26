//Dreamoon and stairs(c++)
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,m;
   cin>>n>>m;
   int x,f=0;
   if(m>n)
   cout<<-1;
   else{
   if(n%2==0)
   x=n/2;
   else
   x=n/2+1;
   
   while(x%m!=0&&x<=n){
       x++;
   }
   cout<<x;
  
}}