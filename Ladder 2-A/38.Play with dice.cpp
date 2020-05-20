#include<bits/stdc++.h>
#define out cout<<x<<" "
#define out1 cout<<x<<"\n"
using namespace std;
int main()
{
int a,b;
cin>>a>>b;
int j,k,i,aw=0,bw=0,d=0;
for(i=0;i<6;i++){
    j=abs(i+1-a);
     k=abs(i+1-b);
     if(j<k)
     aw++;
     else if(j>k)
     bw++;
     else
     d++;
}
cout<<aw<<" "<<d<<" "<<bw;
}