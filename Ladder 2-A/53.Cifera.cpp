//Cifera(c++)
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
long long int a,b,x;
cin>>a>>b;
x=b;
int c=0;
if(a==b){
    cout<<"YES"<<endl<<c;
    return 0;
}
else if(b%a!=0)
cout<<"NO";
else{
while(b>a){
    b=b/a;
    x=b%a;
    c++;
   }
   if(x==0){
       cout<<"YES"<<endl<<c;
   }
   else
   cout<<"NO";
   return 0;
}
}
    