//Lunch Rush
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,k,i,max=0,f=0,t=0,x=0;
cin>>n>>k;
cin>>f>>t;
if(t>k){
max=f-(t-k);
}
else{
max=f;
}
for(i=1;i<n;i++){
cin>>f>>t;
if(t>k){
x=f-(t-k);
}
else{
x=f;
}
if(x>max)
max=x;
}
cout<<max;
}