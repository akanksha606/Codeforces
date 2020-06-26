//Expression(c++)
#include<bits/stdc++.h>
using namespace std;
int main(){
int a,b,c,m,i,ar[6];
cin>>a>>b>>c;
ar[0]=a*b*c;
ar[1]=(a*b)+c;
ar[2]=a+(b*c);
ar[3]=a+b+c;
ar[4]=(a+b)*c;
ar[5]=a*(b+c);
m=ar[0];
for(i=0;i<6;i++){
    if(m<ar[i])
    m=ar[i];
}
cout<<m;
}
