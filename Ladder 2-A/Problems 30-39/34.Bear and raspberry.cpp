//Bear and raspberry
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,c,i,max=0,x=0;
cin>>n>>c;
int a[n];
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n-1;i++){
    if((a[i]-a[i+1])>max){
        max=a[i]-a[i+1];
    }
}
int y=max-c;
if(max==0||y<0)
cout<<0;
else
cout<<(max-c);
}